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
    private var touchCount = 0
    private var path : UIBezierPath!
    let sqlCommand = SqlCommand()
    var ARObjectStats : [String:[String:Any]]?
    
    
    //var planes = [ARPlaneAnchor: PlaneNode]()
    override func viewDidLoad() {
        super.viewDidLoad()
        self.navigationController?.isNavigationBarHidden = false
        // Set the view's delegate
        sceneView.delegate = self
        sqlCommand.createTable()
        sqlCommand.selectObject()
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
    func initShape(){
        path.move(to: CGPoint(x: 0, y:0))
        path.addLine(to: CGPoint(x:0, y:0.2))
        path.addLine(to: CGPoint(x:0.3, y:0.2))
        path.addLine(to: CGPoint(x:0.3, y:0))
        let shape = SCNShape(path: path, extrusionDepth:0.2)
    }
    override func touchesBegan(_ touches: Set<UITouch>, with event: UIEvent?) {
        if let touch = touches.first{
            
            
            //location of where we touch on 2d screen
            let touchLocation = touch.location(in: sceneView)
            // to perform to get the 3D coordinate corresponding to the 2D coord.
            // 3d coord will only be considered when it is on the existing plane we detected.
            let results = sceneView.hitTest(touchLocation, types: .existingPlaneUsingExtent)
            // check if we got some result using hitTest.
            if touchCount == 0, let hitResult = results.first{
                let boxScene = SCNScene(named: "art.scnassets/portal.scn")!
                if let boxNode = boxScene.rootNode.childNode(withName: "portal", recursively: true){
                    boxNode.position = SCNVector3(x:hitResult.worldTransform.columns.3.x,
                                                  y:hitResult.worldTransform.columns.3.y + 0.05,
                                                  z:hitResult.worldTransform.columns.3.z)
                    boxNode.eulerAngles = SCNVector3(x:0.0,
                                                     y:270.0,
                                                     z:0.0)

                    if imgSet.count > 4{
                        if let roomNode = boxScene.rootNode.childNode(withName: "room", recursively: true){
                            for i in 0...imgSet.count - 1{
                                let img : UIImage = UIImage(named: imgSet[i])!
                                roomNode.geometry?.materials[i].diffuse.contents = img
                            }
                        }
                        for key in (ARObjectStats?.keys)!{
                            if let tableNode = boxScene.rootNode.childNode(withName: key, recursively: true){
                                tableNode.position = setObjectPositionInSwift(objectKey: key)
//                            tableNode.eulerAngles = setObjectEulerInSwift(objectKey: key)
                                tableNode.scale = setObjectScaleInSwift(objectKey: key)
                            }
                        }
                    }
                    sceneView.scene.rootNode.addChildNode(boxNode)
                    touchCount += 1
                }
            }
        }
//        let table = boxNode.childNode(withName: "table", recursively: true)
//
//        let detectedObject = self.planes[planeAnchor]
//        let nodeId = detectedObject.name
//        print(nodeId)
    }
    
    func setObjectPositionInSwift( objectKey : String ) -> SCNVector3 {
        let result : SCNVector3 = SCNVector3(x: ( (ARObjectStats![objectKey]!["xpos"] as! Float) / 6 ) * -0.9,
                                             y: (-0.213),
                                             z: ( (ARObjectStats![objectKey]!["zpos"] as! Float) / 6 ) * 0.9 )
        print("***** \(objectKey) POSITION: \(result)")
        return result
    }
    
    func setObjectEulerInSwift( objectKey : String ) -> SCNVector3 { // this is really inconsistent for some reason...
        let result : SCNVector3 = SCNVector3(x: ( (ARObjectStats![objectKey]!["xrot"] as! Float) - 90 ),
                                             y: ( (ARObjectStats![objectKey]!["yrot"] as! Float) ),
                                             z: ( (ARObjectStats![objectKey]!["zrot"] as! Float) ) )
        print("***** \(objectKey) ROTATION: \(result)")
        return result
    }
    
    func setObjectScaleInSwift( objectKey : String ) -> SCNVector3 {
        let result : SCNVector3 = SCNVector3(x: ( (ARObjectStats![objectKey]!["xsca"] as! Float) / 30 ),
                                             y: ( (ARObjectStats![objectKey]!["ysca"] as! Float) / 30 ),
                                             z: ( (ARObjectStats![objectKey]!["zsca"] as! Float) / 30 ) )
        print("***** \(objectKey) SCALE: \(result)")
        return result
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
            //self.planes[planeAnchor] = planeNode
            node.addChildNode(planeNode)
        }
    }
    
    public func setImgSet( paramsImgSet : [String] ){
        imgSet.removeAll()
        for i in 0...paramsImgSet.count - 1{
            imgSet.append(((NSSearchPathForDirectoriesInDomains(.documentDirectory, .userDomainMask, true)[0] as NSString) as String).appending(paramsImgSet[i]) )
        }
    }
    
    public func setARObjStats( ARObjectStats_param : [String:[String:Any]] ){
        ARObjectStats = ARObjectStats_param
    }
}
