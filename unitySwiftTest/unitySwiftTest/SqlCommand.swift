//
//  File.swift
//  unitySwiftTest
//
//  Created by Devin Lim on 4/26/18.
//  Copyright © 2018 Jeremy Ronquillo. All rights reserved.
//

import Foundation
import SQLite3

class SqlCommand{
    var db : OpaquePointer?
    var objects : [String: Int] = ["table":1, "chair":2, "plant1":3, "toliet":4]
    init(){
        let fileUrl = try!
            FileManager.default.url(for: .documentDirectory, in: .userDomainMask, appropriateFor: nil, create: false).appendingPathComponent("ARDatabase.sqlite")
        if sqlite3_open(fileUrl.path, &db) != SQLITE_OK{
            print("Something wrong with database")
        }
        
    }
    func createTable(){
        // DROP TABLE Picture; DROP TABLE Object; DROP TABLE ObjectSpec; DROP TABLE ARSpace;
        let createTableQuery =
            "CREATE TABLE IF NOT EXISTS Picture(pId INTEGER,surface INTEGER,fileName TEXT,PRIMARY KEY(pId,surface));" +
            "CREATE TABLE IF NOT EXISTS Object (objId INTEGER PRIMARY KEY AUTOINCREMENT,name TEXT,fileName TEXT);" +
            "CREATE TABLE IF NOT EXISTS ObjectSpec(specId INTEGER,objId INTEGER,x_Coor REAL,y_Coor REAL,z_Coor REAL,x_rotate REAL,y_rotate REAL,z_rotate REAL,x_scale REAL,y_scale REAL,z_scale REAL, PRIMARY KEY(specId, objId));" +
            "CREATE TABLE IF NOT EXISTS ARSpace(spaceId INTEGER PRIMARY KEY AUTOINCREMENT,pId INTEGER,specId INTEGER, city TEXT, postal TEXT, state TEXT, country TEXT, longitude REAL, latitude REAL, FOREIGN KEY (pId) REFERENCES Picture(pId),FOREIGN KEY (specId) REFERENCES ObjectSpec(specId)); "
        if sqlite3_exec(db, createTableQuery, nil, nil, nil) != SQLITE_OK{
            print("ERROR while creating table")
            return
        }
        print("create successful")
    }
    func insertInitData(){
        let initInsertQuery = "INSERT INTO Object (name, fileName) VALUES ('table','table.dae'), ('chair','chair.dae'), ('plant1','plant1.dae'), ('toliet','toliet.dae');"
        proceedData(query: initInsertQuery, tableName:"Object", proceeding:"insert")
    }
    func proceedData(query:String, tableName:String, proceeding:String){
        if sqlite3_exec(db, query, nil, nil, nil) != SQLITE_OK{
            print("Error while \(proceeding) data in \(tableName)")
            return
        }
        print("\(proceeding) successful")
    }
    func selectObject(){
        var selectStatement: OpaquePointer?
        let selectQuery = "SELECT * FROM Object;"
        if sqlite3_prepare(db, selectQuery, -1, &selectStatement, nil) == SQLITE_OK{
            while sqlite3_step(selectStatement) == SQLITE_ROW{
                let id = sqlite3_column_int(selectStatement, 0)
                let name = String( cString:sqlite3_column_text(selectStatement, 1) )
                let fileName = String( cString:sqlite3_column_text(selectStatement, 2) )
                print( "id:\(id) , name : , \(name), Filename : \(fileName)" )
            }
        }
        sqlite3_finalize(selectStatement)
    }
    func insertImage( names:[String] ) -> Int{
        var i = 0
        var insertingVars = ""
        let maxId = getMaxid(idName:"pid",tableName:"Picture") + 1
        for name in names{
            insertingVars += "(\(maxId),\(i),'\(name)')" + (i == 5 ? ";" : ", ")
            i += 1
        }
        let insertQuery = "INSERT INTO Picture VALUES " + insertingVars
        print(insertQuery)
        proceedData(query: insertQuery, tableName:"Picture", proceeding:"insert")
        return maxId
    }
    func selectAllLocation()->[Int:String]{
        var selectStatement: OpaquePointer?
        let selectQuery = "SELECT DISTINCT a.pid, (a.city || \",\" || a.state) AS location FROM ARSpace a, Picture p WHERE a.pId=p.pId;"
        var fileList = [Int:String]()
        if sqlite3_prepare(db, selectQuery, -1, &selectStatement, nil) == SQLITE_OK{
            while sqlite3_step(selectStatement) == SQLITE_ROW{
                let pid = Int(sqlite3_column_int(selectStatement, 0))
                let location = String( cString:sqlite3_column_text(selectStatement, 1) )
                fileList[pid] = location
                print( "pid:\(pid) , Location : \(location)" )
            }
        }
        sqlite3_finalize(selectStatement)
        print( "File list : ")
        print(fileList)
        return fileList
    }
    func selectAllPicture()->[Int:[Int:String]]{
        var selectStatement: OpaquePointer?
        let selectQuery = "SELECT * FROM Picture;"
        var fileList = [Int:[Int:String]]()
        if sqlite3_prepare(db, selectQuery, -1, &selectStatement, nil) == SQLITE_OK{
            var subDictionary : [Int : String] = [Int: String]()
            while sqlite3_step(selectStatement) == SQLITE_ROW{
                let pid = sqlite3_column_int(selectStatement, 0)
                let surface = sqlite3_column_int(selectStatement, 1)
                let fileName = String( cString:sqlite3_column_text(selectStatement, 2) )
                subDictionary[Int(surface)] = fileName
                fileList[Int(pid)] = subDictionary
                print( "pid:\(pid) , surface : , \(surface), Filename : \(fileName)" )
            }
        }
        sqlite3_finalize(selectStatement)
        print( "File list : ")
        print(fileList)
        return fileList
    }
    func getMaxid(idName:String, tableName:String) -> Int{
        var selectStatement: OpaquePointer?
        let selectQuery = "SELECT COALESCE(MAX(\(idName)),-1) FROM \(tableName);"
        print( selectQuery )
        var id = 0
        if sqlite3_prepare(db, selectQuery, -1, &selectStatement, nil) == SQLITE_OK{
            while sqlite3_step(selectStatement) == SQLITE_ROW{
                id = Int(sqlite3_column_int(selectStatement, 0))
                print( "max id:\(id)" )
            }
        }
        sqlite3_finalize(selectStatement)
        return id
    }
    func insertObjectSpec(dataList:[String:[String:Any]]?) -> Int{
        var insertQuery = "INSERT INTO ObjectSpec VALUES "
        var insertingVars = ""
        let maxId = getMaxid(idName:"specId",tableName:"ObjectSpec") + 1
        var i = 0;
        for objectName in (dataList?.keys)!{
            if let objIDtoInsert : Int = objects[objectName]{
                insertingVars += ( i == 0 ? "" : ", " ) + "( \(maxId), \(objIDtoInsert), "
            }
            insertingVars += "\(dataList![objectName]?["xpos"] as! Float), "
            insertingVars += "\(dataList![objectName]?["ypos"] as! Float), "
            insertingVars += "\(dataList![objectName]?["zpos"] as! Float), "
            insertingVars += "\(dataList![objectName]?["xrot"] as! Float), "
            insertingVars += "\(dataList![objectName]?["yrot"] as! Float), "
            insertingVars += "\(dataList![objectName]?["zrot"] as! Float), "
            insertingVars += "\(dataList![objectName]?["xsca"] as! Float), "
            insertingVars += "\(dataList![objectName]?["ysca"] as! Float), "
            insertingVars += "\(dataList![objectName]?["zsca"] as! Float))"
            i += 1
        }
        insertQuery += insertingVars
        print(insertQuery)
        proceedData(query: insertQuery, tableName:"ObjectSpec", proceeding:"insert")
        return maxId
    }
    func updateObjectSpec(dataList:[String:[String:Any?]], spaceId : Int){
        
        let dictConvertKeys : [String:String] = ["xpos" : "x_Coor",
                                                 "ypos" : "y_Coor",
                                                 "zpos" : "z_Coor",
                                                 "xrot" : "x_rotate",
                                                 "yrot" : "y_rotate",
                                                 "zrot" : "z_rotate",
                                                 "xsca" : "x_scale",
                                                 "ysca" : "y_scale",
                                                 "zsca" : "z_scale" ]
        for key in (dataList.keys){
            let updateQuery = "UPDATE ObjectSpec SET "
            var updatingVars = ""
            var updatingWhere = ""
            if let ok = objects[key]{
                updatingWhere = "WHERE objId = \(ok) AND specId IN (" +
                "SELECT specId FROM ARSpace WHERE spaceId=\(spaceId));"
            }
            var j = 0;
            for convertKey in dictConvertKeys.keys{
                if let value : Float = dataList[key]![convertKey] as? Float, let ck = dictConvertKeys[convertKey]{
                    updatingVars += "\(ck) = \(value)" + ( j >= 8 ? " " : ", " )
                    j += 1
                }
            }
            let resultQuery = updateQuery + updatingVars + updatingWhere
            print(resultQuery)
            proceedData(query: resultQuery, tableName:"ObjectSpec", proceeding:"update")
        }
    }
    
    
    func selectObjectSpec(spaceId:Int, isDictionary : Bool)->Any?{
        print("here0")
        var selectStatement: OpaquePointer?
        var selectQuery = "SELECT specId FROM ARSpace WHERE spaceId=\(spaceId);"
        var specId:Int? = nil
        if sqlite3_prepare(db, selectQuery, -1, &selectStatement, nil) == SQLITE_OK{
            while sqlite3_step(selectStatement) == SQLITE_ROW{
                if sqlite3_column_type(selectStatement, 0) != SQLITE_NULL{
                    specId = Int(sqlite3_column_int(selectStatement, 0))
                }else{
                    sqlite3_finalize(selectStatement)
                    return [:]
                }
            }
        }
        
        sqlite3_finalize(selectStatement)
        var selectStatements: OpaquePointer?
        selectQuery = """
        SELECT objSp.objId, obj.objId, obj.name, objSp.x_Coor, objSp.y_Coor, objSp.z_Coor,
        objSp.x_rotate, objSp.y_rotate, objSp.z_rotate, objSp.x_scale, objSp.y_scale, objSp.z_scale
        FROM ObjectSpec objSp, Object obj
        WHERE specId=\(specId!) AND objSp.objId=obj.objId;
        """
        var stringResult : String = ""
        var specList = [String:[String:Any]]()
        if sqlite3_prepare(db, selectQuery, -1, &selectStatements, nil) == SQLITE_OK{
            while sqlite3_step(selectStatements) == SQLITE_ROW{
                var subDictionary : [String : Any] = [String: Any]()
                let name = String( cString:sqlite3_column_text(selectStatements, 2) )
                if isDictionary{
                    subDictionary[ "name" ] = name + " (UnityEngine.GameObject)"
                    subDictionary[ "xpos" ] = Float(sqlite3_column_double(selectStatements, 3))
                    subDictionary[ "ypos" ] = Float(sqlite3_column_double(selectStatements, 4))
                    subDictionary[ "zpos" ] = Float(sqlite3_column_double(selectStatements, 5))
                    subDictionary[ "xrot" ] = Float(sqlite3_column_double(selectStatements, 6))
                    subDictionary[ "yrot" ] = Float(sqlite3_column_double(selectStatements, 7))
                    subDictionary[ "zrot" ] = Float(sqlite3_column_double(selectStatements, 8))
                    subDictionary[ "xsca" ] = Float(sqlite3_column_double(selectStatements, 9))
                    subDictionary[ "ysca" ] = Float(sqlite3_column_double(selectStatements, 10))
                    subDictionary[ "zsca" ] = Float(sqlite3_column_double(selectStatements, 11))
                    specList[ name ] = subDictionary
                } else {
                    stringResult += name + "" + ","
                    stringResult += String(sqlite3_column_double(selectStatements, 3)) + ","
                    stringResult += String(sqlite3_column_double(selectStatements, 4)) + ","
                    stringResult += String(sqlite3_column_double(selectStatements, 5)) + ","
                    stringResult += String(sqlite3_column_double(selectStatements, 6)) + ","
                    stringResult += String(sqlite3_column_double(selectStatements, 7)) + ","
                    stringResult += String(sqlite3_column_double(selectStatements, 8)) + ","
                    stringResult += String(sqlite3_column_double(selectStatements, 9)) + ","
                    stringResult += String(sqlite3_column_double(selectStatements, 10)) + ","
                    stringResult += String(sqlite3_column_double(selectStatements, 11)) + ";"
                }
                
            }
        }
        sqlite3_finalize(selectStatements)
        if isDictionary{
            print( specList )
            return specList
        } else {
            print(stringResult)
            return stringResult
        }
    }
    
    func insertArSpaceElement(pId:Int, specId:Any?, city:String, postal:String, state:String, country:String, longitude:Float, latitude:Float ){
        print (specId)
        let spId = specId == nil ? "null" : String(specId as! Int)
        print(spId)
        var insertQuery = "INSERT INTO ARSpace (pId,specId,city,postal,state,country,longitude,latitude ) VALUES (\(pId),\(spId),'\(city)','\(postal)','\(state)','\(pId)',\(longitude),\(latitude));"
        proceedData(query: insertQuery, tableName:"ARSpace", proceeding:"insert")
    }
    func selectArSpace(){
        var selectStatement: OpaquePointer?
        let selectQuery = "SELECT * FROM ARSpace;"
        if sqlite3_prepare(db, selectQuery, -1, &selectStatement, nil) == SQLITE_OK{
            while sqlite3_step(selectStatement) == SQLITE_ROW{
                let spaceId = sqlite3_column_int(selectStatement, 0)
                let pid = sqlite3_column_int(selectStatement, 1)
                var specId:Int? = nil
                if sqlite3_column_type(selectStatement, 2) != SQLITE_NULL{
                    specId = Int(sqlite3_column_int(selectStatement, 2))
                }
                print( "spaceId:\(spaceId) , pid : , \(pid), specId : \(specId)" )
            }
        }
        sqlite3_finalize(selectStatement)
    }
    func getSpaceId(pId:Int)->Int{
        var selectStatement: OpaquePointer?
        var spaceId:Int = 0
        let selectQuery = "SELECT spaceId FROM ARSpace WHERE pId=\(pId);"
        if sqlite3_prepare(db, selectQuery, -1, &selectStatement, nil) == SQLITE_OK{
            while sqlite3_step(selectStatement) == SQLITE_ROW{
                spaceId = Int(sqlite3_column_int(selectStatement, 0))
            }
        }
        sqlite3_finalize(selectStatement)
        return spaceId
    }
    func removeArSpace(picId:Int){
        var selectStatement: OpaquePointer?
        var specId:Int? = nil
        let selectQuery = "SELECT specId FROM ARSpace WHERE pid=\(picId);"
        if sqlite3_prepare(db, selectQuery, -1, &selectStatement, nil) == SQLITE_OK{
            while sqlite3_step(selectStatement) == SQLITE_ROW{
                var specId:Int? = nil
                if sqlite3_column_type(selectStatement, 0) != SQLITE_NULL{
                    specId = Int(sqlite3_column_int(selectStatement, 0))
                }
                print( "specId : \(specId)" )
            }
        }
        sqlite3_finalize(selectStatement)
        var deleteQuery = "DELETE FROM ARSpace WHERE pid=\(picId); DELETE FROM Picture WHERE pid=\(picId);"
        if specId != nil{
            deleteQuery += " DELETE FROM ObjectSpec WHERE specId=\(specId);"
        }
        proceedData(query: deleteQuery, tableName:"ARSpace,Picture,ObjectSpec", proceeding:"deleting")
    }
}
