//
//  StillFrameScene.swift
//  unitySwiftTest
//
//  Created by Jeremy Ronquillo on 3/6/18.
//  Copyright © 2018 Jeremy Ronquillo. All rights reserved.
//

import Foundation
import SpriteKit

class StillFrameScene : SKScene{
    private let SCALE_INIT : CGFloat = 0.1
    private let COORDINATE_OFFSET_FACTOR_X : CGFloat = 95.0
    private let COORDINATE_OFFSET_FACTOR_Y : CGFloat = 220.0
    
    private var label : SKLabelNode?
    private var spinnyNode : SKShapeNode?
    private var coord : CGPoint?
    private var zDistance : CGFloat?
    private var touchOffset : CGPoint?
    private var objectSelected : Bool?
    var fileName:String!
    var cat : SKSpriteNode?
    public var isEditing : Bool?
    
    override func didMove(to view: SKView) {
        isEditing = false
        objectSelected = false
        readFile()
        placeNode()
    }
    
    func getDocumentsDirectory() -> URL {
        let paths = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask)
        return paths[0]
    }
    
    func readFile(){
        let fileManager = FileManager.default
        
        let file:String = "obj_coordinates.txt"
        
        if let dir = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask).first {
            let fileURL = dir.appendingPathComponent(file)
            
            //reading
            do {
                let text2 = try String(contentsOf: fileURL, encoding: .utf8)
                
                let splitStr = text2.split(separator: ",")
                coord = CGPoint(x: Double(splitStr[0])!, y: Double(splitStr[1])!)
                zDistance = CGFloat(Double(splitStr[2].split(separator: "\n")[0])!)
                
                print(coord)
                print(zDistance)
            }
            catch {
                print( "THERE WAS A PROBLEM READING FROM FILE" )
                
            }
        }
    }
    func setBackground(fileName:String){
        var background = SKSpriteNode( imageNamed:fileName )
        background.zPosition = -1
        background.size = self.frame.size
        background.position = CGPoint( x: 0, y:0 )
        self.addChild(background)
    }
    func placeNode(){
        cat = SKSpriteNode(imageNamed: "cat.png")
        cat?.zPosition = 0
        cat?.xScale = SCALE_INIT * abs( 1.25 / zDistance! )
        cat?.yScale = SCALE_INIT * abs( 1.25 / zDistance! )
        cat?.position.x = (coord?.x)! * COORDINATE_OFFSET_FACTOR_X
        cat?.position.y = ( (coord?.y)! + abs( zDistance! ) / 5.0 ) * COORDINATE_OFFSET_FACTOR_Y
        
        print( "actual cat position: \(cat?.position)" )
        
        self.addChild((cat)!)
    }
    
    
    func touchDown(atPoint pos : CGPoint) {
        if (checkIfInRange(touch: pos, obj: cat!) && isEditing!){
            touchOffset = CGPoint(x: pos.x - (cat?.position.x)!, y: pos.y - (cat?.position.y)!)
            objectSelected = true
        }
    }
    
    func touchMoved(toPoint pos : CGPoint) {
        if (objectSelected! && isEditing!){
            cat?.position = CGPoint(x: pos.x - (touchOffset?.x)!, y: pos.y - (touchOffset?.y)!)
        }
    }
    
    func touchUp(atPoint pos : CGPoint) {
        objectSelected = false
    }
    
    func checkIfInRange( touch : CGPoint, obj : SKSpriteNode ) -> Bool {
        let objWidthHalf = obj.frame.width / 2.0
        let objHeightHalf = obj.frame.height / 2.0
        let objXPos = obj.position.x
        let objYPos = obj.position.y
        return touch.x < objXPos + objWidthHalf &&
               touch.x > objXPos - objWidthHalf &&
               touch.y < objYPos + objHeightHalf &&
               touch.y > objYPos - objHeightHalf
    }
    
    override func touchesBegan(_ touches: Set<UITouch>, with event: UIEvent?) {
        if let label = self.label {
            label.run(SKAction.init(named: "Pulse")!, withKey: "fadeInOut")
        }
        
        for t in touches { self.touchDown(atPoint: t.location(in: self)) }
    }
    
    override func touchesMoved(_ touches: Set<UITouch>, with event: UIEvent?) {
        for t in touches { self.touchMoved(toPoint: t.location(in: self)) }
    }
    
    override func touchesEnded(_ touches: Set<UITouch>, with event: UIEvent?) {
        for t in touches { self.touchUp(atPoint: t.location(in: self)) }
    }
    
    override func touchesCancelled(_ touches: Set<UITouch>, with event: UIEvent?) {
        for t in touches { self.touchUp(atPoint: t.location(in: self)) }
    }
    
    
    override func update(_ currentTime: TimeInterval) {
        // Called before each frame is rendered
    }
}

