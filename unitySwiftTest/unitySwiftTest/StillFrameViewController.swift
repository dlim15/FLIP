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
    let dialogAction = DialogActions()
    var imageName:String!
    let fileManager = FileManager.default
    var scene : StillFrameScene?
    @IBOutlet weak var editButton: UIButton!
    @IBOutlet weak var backButton: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.navigationItem.setHidesBackButton(true, animated:false)
        
        if let view = self.view as! SKView? {
            if let s = StillFrameScene(fileNamed: "StillFrameScene" ){
                s.scaleMode = .aspectFill
                s.setBackground( fileName: self.imageName )
                scene = s
                view.presentScene(scene)
            }
            else{
                print("failed to init scene")
            }
            view.ignoresSiblingOrder = true
            view.showsFPS = true
            view.showsNodeCount = true
            view.isMultipleTouchEnabled = false
        }
    }
    @IBAction func btnRemoveCall(_ sender: UIButton) {
        dialogAction.alertMsg(controller: self) {
            self.removeProcedure()
        }

    }
    func removeProcedure(){
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
    @IBAction func backButtonAction(_ sender: Any) {
        navigationController?.popViewController(animated: true)
        self.dismiss(animated: true, completion: nil)
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
    @IBAction func editButtonAction(_ sender: Any) {
        scene?.isEditing = !(scene?.isEditing)!
        backButton.isEnabled = !backButton.isEnabled
        if (scene?.isEditing)!{
            editButton.setTitle("Stop Editing", for: UIControlState.normal)
        }
        else {
            editButton.setTitle("Edit", for: UIControlState.normal)
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
