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
    override func viewDidLoad() {
        super.viewDidLoad()
        
        if let view = self.view as! SKView? {
            if let scene = StillFrameScene(fileNamed: "StillFrameScene" ){
                print("aaaaaaaaaaaaaaaaaaaaaaaaaaaa")
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
