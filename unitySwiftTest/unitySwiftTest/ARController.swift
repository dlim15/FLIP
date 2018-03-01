//
//  ARController.swift
//  unitySwiftTest
//
//  Created by Devin Lim on 2/27/18.
//  Copyright © 2018 Jeremy Ronquillo. All rights reserved.
//

import UIKit

class ARController: UIViewController {
//    @IBOutlet var rotateSwitch: UISwitch!
    let appDelegate = UIApplication.shared.delegate as? AppDelegate
    
    @objc func handleUnityReady() {
        showUnitySubView()
    }
    @IBAction func ARViewBackAction(_ sender: UIButton) {
        // TODO: find the way to close the unity.
        // see: https://github.com/jiulongw/swift-unity/issues/25
        appDelegate?.stopUnity()
        
        print("AR view exited.")
        self.dismiss(animated: true, completion: nil)
    }
    
    @IBAction func SFViewBackAction(_ sender: Any) {
        print("SF view exited.")
        self.dismiss(animated: true, completion: nil)
    }
    
    //    @objc func handleUnityToggleRotation(_ n: NSNotification) {
//        if let isOn = n.userInfo?["isOn"] as? NSNumber {
//            rotateSwitch.isOn = isOn.boolValue
//        }
//    }
    
//    @IBAction func handleSwitchValueChanged(sender: UISwitch) {
//        UnityPostMessage("NATIVE_BRIDGE", "RotateCube", sender.isOn ? "start" : "stop")
//    }
    
    func showUnitySubView() {
        if let unityView = UnityGetGLView() {
            // insert subview at index 0 ensures unity view is behind current UI view
            view?.insertSubview(unityView, at: 0)
            
            unityView.translatesAutoresizingMaskIntoConstraints = false
            let views = ["view": unityView]
            let w = NSLayoutConstraint.constraints(withVisualFormat: "|-0-[view]-0-|", options: [], metrics: nil, views: views)
            let h = NSLayoutConstraint.constraints(withVisualFormat: "V:|-75-[view]-0-|", options: [], metrics: nil, views: views)
            view.addConstraints(w + h)
        }
    }
    func showUnity() {
        appDelegate?.startUnity()
        NotificationCenter.default.addObserver(self, selector: #selector(handleUnityReady), name: NSNotification.Name("UnityReady"), object: nil)
        // NotificationCenter.default.addObserver(self, selector: #selector(handleUnityToggleRotation(_:)), name: NSNotification.Name("UnityToggleRotation"), object: nil)
        handleUnityReady()
    }
    override func viewDidLoad() {
        super.viewDidLoad()
        showUnity()
        // Do any additional setup after loading the view.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
