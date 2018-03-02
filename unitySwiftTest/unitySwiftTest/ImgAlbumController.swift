//
//  ImgAlbumController.swift
//  unitySwiftTest
//
//  Created by Devin Lim on 3/1/18.
//  Copyright © 2018 Jeremy Ronquillo. All rights reserved.
//

class ImgAlbumController: UIViewController, UICollectionViewDelegate, UICollectionViewDataSource {

    @IBOutlet weak var collectionView: UICollectionView!
    var sampImgs = ["1","2","3"]
    override func viewDidLoad() {
        super.viewDidLoad()
        collectionView.delegate = self
        collectionView.dataSource = self
    }
    public func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int{
        return sampImgs.count
    }
    
    public func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell{
        let cell = collectionView.dequeueReusableCell(withReuseIdentifier: "ImgCell", for: indexPath) as! ImgAlbumCell
        cell.ARImage.image = UIImage(named:sampImgs[indexPath.row])
        cell.layer.borderColor = UIColor.brown.cgColor
        cell.layer.borderWidth = 1
        
        return cell
    }
}
