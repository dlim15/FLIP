//
//  StillFrame.swift
//  unitySwiftTest
//
//  Created by Jeremy Ronquillo on 3/6/18.
//  Copyright © 2018 Jeremy Ronquillo. All rights reserved.
//

import UIKit
import SpriteKit
import GameplayKit

class StillFrameViewController : UIViewController {
    var imageName:String!
    let fileManager = FileManager.default
    override func viewDidLoad() {
        super.viewDidLoad()
        
        if let view = self.view as! SKView? {
            if let scene = StillFrameScene(fileNamed: "StillFrameScene" ){
                scene.scaleMode = .aspectFill
                scene.setBackground( fileName: self.imageName )
                view.presentScene(scene)
            }
            else{
                print("failed to init scene")
            }
            view.ignoresSiblingOrder = true
            view.showsFPS = true
            view.showsNodeCount = true
        }
    }
    @IBAction func btnRemoveCall(_ sender: UIButton) {
        do{
            if fileManager.fileExists(atPath: imageName){
                try fileManager.removeItem(atPath: imageName)
            }
            else{
                print(imageName + " File not existing ")
            }
        }catch{
            print(" there was an error removing file at " + imageName)
        }
        
        self.navigationController?.popViewController(animated: true)
    }
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        if self.isMovingFromParentViewController {
            UnityPostMessage("NATIVE_BRIDGE", "AnimateKitten", "")
        }
    }
    override var shouldAutorotate: Bool {
        return true
    }
    
    override var supportedInterfaceOrientations: UIInterfaceOrientationMask {
        if UIDevice.current.userInterfaceIdiom == .phone {
            return .allButUpsideDown
        } else {
            return .all
        }
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Release any cached data, images, etc that aren't in use.
    }
    
    override var prefersStatusBarHidden: Bool {
        return true
    }
    
    
    
}
