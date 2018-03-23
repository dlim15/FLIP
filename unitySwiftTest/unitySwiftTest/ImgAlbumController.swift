//
//  ImgAlbumController.swift
//  unitySwiftTest
//
//  Created by Devin Lim on 3/1/18.
//  Copyright © 2018 Jeremy Ronquillo. All rights reserved.
//

class ImgAlbumController: UIViewController, UICollectionViewDelegate, UICollectionViewDataSource {

    @IBOutlet weak var collectionView: UICollectionView!
    var sampImgs = [] as [String]
    var images = [] as [UIImage]
    override func viewDidLoad() {
        super.viewDidLoad()
        loadImg()
        collectionView.delegate = self
        collectionView.dataSource = self
        
        
    }
    
    func loadImg(){
        let path = NSSearchPathForDirectoriesInDomains(.documentDirectory, .userDomainMask, true)
        let documentPath:String = path[0]
        do{
            let title = try FileManager.default.contentsOfDirectory(atPath: documentPath)
            for image in title{
                if image.contains("."){
                    let index = image.index(of:".")!
                    let end = image[index...]
                    if end == ".png"{
                        sampImgs.append(documentPath + "/" + image)
                    }
                }
                
            }
        }catch{
            print("error")
        }
    }
    public func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int{
        return sampImgs.count
    }
    
    public func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell{
        let cell = collectionView.dequeueReusableCell(withReuseIdentifier: "ImgCell", for: indexPath) as! ImgAlbumCell
        cell.ARImage.image = UIImage( data:FileManager.default.contents( atPath:sampImgs[ indexPath.row ] )! )
        cell.layer.borderColor = UIColor.brown.cgColor
        cell.layer.borderWidth = 1
        
        return cell
    }
    func collectionView(_ collectionView: UICollectionView, didSelectItemAt indexPath: IndexPath) {
        let sfViewController:StillFrameViewController = self.storyboard?.instantiateViewController(withIdentifier: "StillFrameViewController") as! StillFrameViewController
        sfViewController.imageName = self.sampImgs[indexPath.row]
        self.navigationController?.pushViewController(sfViewController, animated: true)
    }
}
