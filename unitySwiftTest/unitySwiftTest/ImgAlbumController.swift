//
//  ImgAlbumController.swift
//  unitySwiftTest
//
//  Created by Devin Lim on 3/1/18.
//  Copyright © 2018 Jeremy Ronquillo. All rights reserved.
//

class ImgAlbumController: UIViewController, UICollectionViewDelegate, UICollectionViewDataSource {

    @IBOutlet weak var btnselect: UIButton!
    @IBOutlet weak var btnRemove: UIButton!
    @IBOutlet weak var collectionView: UICollectionView!
    var selectOn = false as Bool
    var sampImgs = [] as [String]
    var images = [] as [UIImage]
    var selectedImgs = [] as [Int]
    let dialog = DialogActions()
    override func viewDidLoad() {
        super.viewDidLoad()
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
        let path = NSSearchPathForDirectoriesInDomains(.documentDirectory, .userDomainMask, true)
        let documentPath:String = path[0]
        do{
            let title = try FileManager.default.contentsOfDirectory(atPath: documentPath)
            for image in title{
                if image.contains("."){
                    let index = image.index(of:".")!
                    let end = image[index...]
                    if end == ".jpg" || end == ".png"{
                        sampImgs.append(documentPath + "/" + image)
                    }
                }
            }
        }catch{
            print("error")
        }
    }
    
    @IBAction func plusButtonAction(_ sender: Any) {
        let arViewController:ARController = self.storyboard?.instantiateViewController(withIdentifier: "ARController") as! ARController
        self.navigationController?.pushViewController(arViewController, animated: true)
    }
    
    public func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int{
        return sampImgs.count
    }
    
    public func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell{
        let cell = collectionView.dequeueReusableCell(withReuseIdentifier: "ImgCell", for: indexPath) as! ImgAlbumCell
        cell.ARImage.image = UIImage( data:FileManager.default.contents( atPath:sampImgs[ indexPath.row ] )! )
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
            let sfViewController:StillFrameViewController = self.storyboard?.instantiateViewController(withIdentifier: "StillFrameViewController") as! StillFrameViewController
            sfViewController.imageName = self.sampImgs[indexPath.row]
            self.navigationController?.pushViewController(sfViewController, animated: true)
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
                try fileManager.removeItem(atPath: sampImgs[i])
                sampImgs.remove(at: i)
            }
        }catch{
            print("error")
        }
        selectedImgs.removeAll()
        selectAction()
        reloadImgs()
    }
}
