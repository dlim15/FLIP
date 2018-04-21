//
//  ARRoomViewController.swift
//  flip
//
//  Created by Devin Lim on 4/19/18.
//  Copyright © 2018 Devin Lim. All rights reserved.
//

import UIKit
import SceneKit
import ARKit

class ARRoomViewController: UIViewController, ARSCNViewDelegate {

    @IBOutlet var sceneView: ARSCNView!
    private var imgSet : [String] = [String()]
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Set the view's delegate
        sceneView.delegate = self
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
        // Create a session configuration
        let configuration = ARWorldTrackingConfiguration()
        // apple arkit supports horizontal only.
        configuration.planeDetection = .horizontal
        
        // Run the view's session
        sceneView.session.run(configuration)
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        
        // Pause the view's session
        sceneView.session.pause()
    }
    override func touchesBegan(_ touches: Set<UITouch>, with event: UIEvent?) {
        if let touch = touches.first{
            //location of where we touch on 2d screen
            let touchLocation = touch.location(in: sceneView)
            // to perform to get the 3D coordinate corresponding to the 2D coord.
            // 3d coord will only be considered when it is on the existing plane we detected.
            let results = sceneView.hitTest(touchLocation, types: .existingPlaneUsingExtent)
            // check if we got some result using hitTest.
            if let hitResult = results.first{
                let boxScene = SCNScene(named: "art.scnassets/portal.scn")!
                if let boxNode = boxScene.rootNode.childNode(withName: "portal", recursively: true){
                    boxNode.position = SCNVector3(x:hitResult.worldTransform.columns.3.x,
                                                  y:hitResult.worldTransform.columns.3.y + 0.05,
                                                  z:hitResult.worldTransform.columns.3.z)
                    if let roomNode = boxScene.rootNode.childNode(withName: "room", recursively: true){
                        roomNode.geometry?.materials[0].diffuse.contents = UIImage(named: "face1.jpg")
                        roomNode.geometry?.materials[1].diffuse.contents = UIImage(named: "face2.jpg")
                        roomNode.geometry?.materials[2].diffuse.contents = UIImage(named: "face3.jpg")
                        roomNode.geometry?.materials[3].diffuse.contents = UIImage(named: "face4.jpg")
                        roomNode.geometry?.materials[4].diffuse.contents = UIImage(named: "face5.jpg")
                        roomNode.geometry?.materials[5].diffuse.contents = UIImage(named: "face6.jpg")
                        
                    }
                    
                    
                    sceneView.scene.rootNode.addChildNode(boxNode)
                }
            }
        }
    }
    //when horizontal plane is detected.
    func renderer(_ renderer: SCNSceneRenderer, didAdd node: SCNNode, for anchor: ARAnchor) {
        if anchor is ARPlaneAnchor{
            let planeAnchor = anchor as! ARPlaneAnchor
            let plane = SCNPlane(width: CGFloat(planeAnchor.extent.x), height: CGFloat(planeAnchor.extent.z))
            let planeNode = SCNNode()
            planeNode.position = SCNVector3(x:planeAnchor.center.x,y:0,z:planeAnchor.center.z)
            planeNode.transform = SCNMatrix4MakeRotation(-Float.pi/2, 1, 0, 0)
            
            let gridMaterial = SCNMaterial()
            gridMaterial.diffuse.contents = UIImage(named: "art.scnassets/grid.png")
            plane.materials = [gridMaterial]
            planeNode.geometry = plane
            node.addChildNode(planeNode)
        }
    }
    
    public func setImgSet( paramsImgSet : [String] ){
        imgSet = paramsImgSet
    }
}
