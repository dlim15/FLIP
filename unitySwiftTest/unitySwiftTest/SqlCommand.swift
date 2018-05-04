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
    var objects = ["table":1, "chair":2, "plant1":3, "toilet":4]
    init(){
        let fileUrl = try!
            FileManager.default.url(for: .documentDirectory, in: .userDomainMask, appropriateFor: nil, create: false).appendingPathComponent("ARDatabase.sqlite")
        if sqlite3_open(fileUrl.path, &db) != SQLITE_OK{
            print("Something wrong with database")
        }
        
    }
    func createTable(){
        // DROP TABLE Picture; DROP TABLE Object; DROP TABLE ObjectSpec; DROP TABLE ARSpace;
        let createTableQuery = "DROP TABLE ObjectSpec;CREATE TABLE IF NOT EXISTS Picture(pId INTEGER,surface INTEGER,fileName TEXT,PRIMARY KEY(pId,surface));CREATE TABLE IF NOT EXISTS Object (objId INTEGER PRIMARY KEY AUTOINCREMENT,name TEXT,fileName TEXT);CREATE TABLE IF NOT EXISTS ObjectSpec(specId INTEGER,objId INTEGER,x_Coor REAL,y_Coor REAL,z_Coor REAL,x_rotate REAL,y_rotate REAL,z_rotate REAL,x_scale REAL,y_scale REAL,z_scale REAL, PRIMARY KEY(specId, objId)); CREATE TABLE IF NOT EXISTS ARSpace(spaceId INTEGER PRIMARY KEY AUTOINCREMENT,pId INTEGER,specId INTEGER,FOREIGN KEY (pId) REFERENCES Picture(pId),FOREIGN KEY (specId) REFERENCES ObjectSpec(specId)); "
        if sqlite3_exec(db, createTableQuery, nil, nil, nil) != SQLITE_OK{
            print("ERROR while creating table")
            return
        }
        print("create successful")
    }
    func insertInitData(){
        let initInsertQuery = "INSERT INTO Object (name, fileName) VALUES ('table','table.dae'), ('chair','chair.dae'), ('plant1','plant1.dae'), ('toilet','toilet.dae');"
        insertingData(insertQuery: initInsertQuery, tableName:"Object")
    }
    func insertingData(insertQuery:String, tableName:String){
        if sqlite3_exec(db, insertQuery, nil, nil, nil) != SQLITE_OK{
            print("Error while inserting data into \(tableName)")
            return
        }
        print("Insert successful")
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
    func insertImage( names:[String] ){
        var i = 0
        var insertingVars = ""
        let maxId = getMaxid(idName:"pid",tableName:"Picture") + 1
        for name in names{
            insertingVars += "(\(maxId),\(i),'\(name)')" + (i == 5 ? ";" : ", ")
            i += 1
        }
        let insertQuery = "INSERT INTO Picture VALUES "
        + insertingVars
        print(insertQuery)
        insertingData(insertQuery: insertQuery, tableName:"Picture")
    }
    func selectPicture(){
        var selectStatement: OpaquePointer?
        let selectQuery = "SELECT * FROM Picture;"
        if sqlite3_prepare(db, selectQuery, -1, &selectStatement, nil) == SQLITE_OK{
            while sqlite3_step(selectStatement) == SQLITE_ROW{
                let pid = sqlite3_column_int(selectStatement, 0)
                let surface = sqlite3_column_int(selectStatement, 1)
                let fileName = String( cString:sqlite3_column_text(selectStatement, 2) )
                print( "pid:\(pid) , surface : , \(surface), Filename : \(fileName)" )
            }
        }
        sqlite3_finalize(selectStatement)
    }
    func getMaxid(idName:String, tableName:String) -> Int{
        var selectStatement: OpaquePointer?
        let selectQuery = "SELECT COALESCE(MAX(\(idName),-1)) FROM \(tableName);"
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
    func insertObjectSpec(dataList:[String:[String:Any]]?){
        var insertQuery = "INSERT INTO ObjectSpec (objId,x_Coor,y_Coor,z_Coor,x_rotate,y_rotate,z_rotate,x_scale,y_scale,z_scale) VALUES "
        var insertingVars = ""
        let maxId = getMaxid(idName:"specId",tableName:"ObjectSpec") + 1
        var i = 0;
        for objectName in (dataList?.keys)!{
            insertingVars += ( i == 0 ? "" : ", " ) + "( \(maxId), \(objects[objectName] as! Int), "
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
        //TODO : insert
    }
}
