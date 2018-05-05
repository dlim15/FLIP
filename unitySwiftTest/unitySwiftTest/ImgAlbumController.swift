//
//  ImgAlbumController.swift
//  unitySwiftTest
//
//  Created by Devin Lim on 3/1/18.
//  Copyright © 2018 Jeremy Ronquillo. All rights reserved.
//

class ImgAlbumController: UIViewController, UICollectionViewDelegate, UICollectionViewDataSource {

    @IBOutlet weak var toggleARViewButton: UIButton!
    @IBOutlet weak var btnselect: UIButton!
    @IBOutlet weak var btnRemove: UIButton!
    @IBOutlet weak var collectionView: UICollectionView!
    var selectOn = false as Bool
    var sampImgs = [] as [Int]
    let documentPath:String = NSSearchPathForDirectoriesInDomains(.documentDirectory, .userDomainMask, true)[0]
    var projectPointerFiles = [] as [String]
    var images = [] as [UIImage]
    var selectedImgs = [] as [Int]
    var sqlCommand = SqlCommand()
    let dialog = DialogActions()
    var files:[Int:[Int:String]] = [:]
    var location:[Int:String] = [:]
    var isOpeningInARView = true
    
    override func viewDidLoad() {
        super.viewDidLoad()
        sqlCommand.createTable()
//        sqlCommand.insertInitData( )
        loadImg()
        collectionView.delegate = self
        collectionView.dataSource = self
    }
    @IBAction func btnselectPress(_ sender: UIButton) {
        selectAction()
    }
    func selectAction(){
        selectOn = !selectOn
        btnRemove.isHidden = !selectOn
        btnRemove.isEnabled = false
        collectionView.allowsMultipleSelection = selectOn
        if selectOn{
            btnselect.setTitle("Deselect", for: .normal)
        }else{
            btnselect.setTitle("Select", for: .normal)
            for i in selectedImgs{
                collectionView.cellForItem(at: [0,i])?.layer.borderColor = UIColor.black.cgColor
            }
            selectedImgs.removeAll()
            
        }
    }
    @IBAction func toggleARViewAndARRoom(_ sender: Any) {
        isOpeningInARView = !isOpeningInARView
        if isOpeningInARView{
            toggleARViewButton.setTitle("Open Project in AR View", for: UIControlState.normal)
        } else {
            toggleARViewButton.setTitle("Open Project in AR Room", for: UIControlState.normal)
        }
    }
    @IBAction func btnRemovePress(_ sender: UIButton) {
        dialog.alertMsg(controller:self) {
            self.removeAction()
        }
    }
    func reloadImgs(){
        loadImg()
        self.collectionView!.reloadData()
    }
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear( animated )
        collectionView.allowsMultipleSelection = false
        selectOn = false
        selectedImgs.removeAll()
        btnselect.setTitle("Select", for: .normal)
        btnRemove.isHidden = true
        reloadImgs()
    }
    func selectedTrack(count:Int){
        if count > 0{
            btnRemove.isEnabled = true
            btnRemove.setTitle("Delete(\(count))", for: .normal)
        } else{
            btnRemove.isEnabled = false
            btnRemove.setTitle("Delete", for: .normal)
        }
        
        
    }
    func loadImg(){
        sampImgs.removeAll()
        files = sqlCommand.selectAllPicture()
        for file in (files.keys){
            sampImgs.append(file)
            //documentPath + ( files![file]![0] as! String )
        }
        location = sqlCommand.selectAllLocation()
        sampImgs.sort()
        print (sampImgs)
    }
    
    @IBAction func plusButtonAction(_ sender: Any) {
        let arViewController:ARController = self.storyboard?.instantiateViewController(withIdentifier: "ARController") as! ARController
        arViewController.setIsNewProject(isNewProject: true)
        self.navigationController?.pushViewController(arViewController, animated: true)
    }
    
    public func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int{
        return sampImgs.count
    }
    
    public func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell{
        let cell = collectionView.dequeueReusableCell(withReuseIdentifier: "ImgCell", for: indexPath) as! ImgAlbumCell
        cell.ARImage.image = UIImage( data:FileManager.default.contents(
            atPath:documentPath + ( files[sampImgs[ indexPath.row ]]?[0] as! String ) )! )
        cell.Location.text = location[ indexPath.row ]
        cell.layer.borderColor = UIColor.black.cgColor
        cell.layer.borderWidth = 1
        
        return cell
    }
    func collectionView(_ collectionView: UICollectionView, didSelectItemAt indexPath: IndexPath) {
        if selectOn{
            let cell = collectionView.cellForItem(at: indexPath)
            cell?.layer.borderColor = UIColor.cyan.cgColor
            selectedImgs.append(indexPath.row)
            selectedTrack(count: selectedImgs.count)
        }else{
            if isOpeningInARView{
                let arViewController:ARController = self.storyboard?.instantiateViewController(withIdentifier: "ARController") as! ARController
                arViewController.setPid(pid: sampImgs[indexPath.row])
                arViewController.setIsNewProject(isNewProject: false)
                self.navigationController?.pushViewController(arViewController, animated: true)
            } else {
                let arRoomViewController:ARRoomViewController = self.storyboard?.instantiateViewController(withIdentifier: "ARRoomViewController") as! ARRoomViewController
                arRoomViewController.setImgSet( path:documentPath, paramsImgSet: files[sampImgs[indexPath.row]]! )
                arRoomViewController.setSpaceId(pid: sampImgs[indexPath.row])
                arRoomViewController.browseObjStats()
                self.navigationController?.pushViewController(arRoomViewController, animated: true)
            }
        }
    }
    func collectionView(_ collectionView: UICollectionView, didDeselectItemAt indexPath: IndexPath) {
        if selectOn{
            let cell = collectionView.cellForItem(at: indexPath)
            cell?.layer.borderColor = UIColor.black.cgColor
            for i in 0...selectedImgs.count-1{
                if(selectedImgs[i] == indexPath.row){
                    selectedImgs.remove(at: i)
                    break
                }
            }
            selectedTrack(count: selectedImgs.count)
        }
    }
    func removeAction(){
        selectedImgs.sort()
        let fileManager = FileManager.default
        do{
            for i in selectedImgs.reversed(){
                try removeImages(i: i, fileManager: fileManager)
            }
        }catch{
            print("error")
        }
        selectedImgs.removeAll()
        location.removeAll()
        selectAction()
        reloadImgs()
    }
    
    func removeImages(i : Int, fileManager : FileManager) throws {
        sqlCommand.removeArSpace(picId:i)
        for file in (files[i]?.values)!{
            try fileManager.removeItem(atPath: documentPath + ( file as! String ))
        }
        sampImgs.remove(at: i)
        files.removeValue(forKey: i)
        location.removeValue(forKey: i)
    }
}
