//
//  ObjectDictionary.swift
//  unitySwiftTest
//
//  Created by Jeremy Ronquillo on 5/3/18.
//  Copyright © 2018 Jeremy Ronquillo. All rights reserved.
//

import Foundation

//class ObjectDictionary{
//    public func convertToUnityDataDict() -> String{
//        var result = "{"
//        for key in (ARObjectStats?.keys)!{
//            result += "\"\(key)\":[{"
//            for subKey in (ARObjectStats![key]?.keys)!{
//                result += "\"\(subKey)\": "
//                if let v = (ARObjectStats![key]![subKey] as? String){
//                    result += "[\(v)],"
//                } else {
//                    result += "[\( NSString(format: "%f", ARObjectStats![key]![subKey] as! Float) )],"
//                }
//            }
//            let index = result.index(result.endIndex, offsetBy: -1)
//            result = String(result[..<index])
//            result += "}]"
//
//        }
//        result += "}"
//        return result
//    }
//
//}
