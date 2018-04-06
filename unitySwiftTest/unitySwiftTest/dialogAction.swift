//
//  dialogAction.swift
//  unitySwiftTest
//
//  Created by Devin Lim on 4/5/18.
//  Copyright © 2018 Jeremy Ronquillo. All rights reserved.
//

import Foundation

class DialogActions{
    init(){}
    func alertMsg(controller: UIViewController, perform: @escaping ()-> ()){
        let removeAlert = UIAlertController(title: "Removing", message: "Are you sure you want to remove the item?", preferredStyle: UIAlertControllerStyle.alert)
        removeAlert.addAction(UIAlertAction(title: "Yes", style: .default, handler: { (action:UIAlertAction!) in
            perform()
        }))
        removeAlert.addAction(UIAlertAction(title: "No", style: .default, handler: { (action:UIAlertAction!) in}))
        controller.present(removeAlert, animated: true, completion: nil)
    }
}
