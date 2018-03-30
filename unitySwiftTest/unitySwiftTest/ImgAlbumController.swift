//
//  ImgAlbumController.swift
//  unitySwiftTest
//
//  Created by Devin Lim on 3/1/18.
//  Copyright © 2018 Jeremy Ronquillo. All rights reserved.
//

class ImgAlbumController: UIViewController, UICollectionViewDelegate, UICollectionViewDataSource {

    @IBOutlet weak var collectionView: UICollectionView!
    @IBOutlet weak var btnKillPngs: UIButton!
    
    var sampImgs = [] as [String]
    var images = [] as [UIImage]
    override func viewDidLoad() {
        super.viewDidLoad()
        loadImg()
        collectionView.delegate = self
        collectionView.dataSource = self
        btnKillPngs.setTitle("KillPNGs", for: .normal)
    }
    // temporary added for clean up pngs.
    @IBAction func btnKillPress(_ sender: UIButton) {
        sampImgs.removeAll()
        let path = NSSearchPathForDirectoriesInDomains(.documentDirectory, .userDomainMask, true)
        let documentPath:String = path[0]
        let fileManager = FileManager.default
        do{
            let title = try FileManager.default.contentsOfDirectory(atPath: documentPath)
            for image in title{
                if image.contains("."){
                    let index = image.index(of:".")!
                    let end = image[index...]
                    if end == ".png"{
                        try fileManager.removeItem(atPath: documentPath + "/" + image)
                    }
                }
            }
        }catch{
            print("error")
        }
        reloadImgs()
    }
    func reloadImgs(){
        loadImg()
        self.collectionView!.reloadData()
    }
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear( animated )
        reloadImgs()
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
        let sfViewController:StillFrameViewController = self.storyboard?.instantiateViewController(withIdentifier: "StillFrameViewController") as! StillFrameViewController
        sfViewController.imageName = self.sampImgs[indexPath.row]
        self.navigationController?.pushViewController(sfViewController, animated: true)
    }
}
