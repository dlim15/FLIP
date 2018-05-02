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
    
    init(){
        let fileUrl = try!
            FileManager.default.url(for: .documentDirectory, in: .userDomainMask, appropriateFor: nil, create: false).appendingPathComponent("ARDatabase.sqlite")
        if sqlite3_open(fileUrl.path, &db) != SQLITE_OK{
            print("Something wrong with database")
        }
        
    }
    func createTable(){
        let createTableQuery = "CREATE TABLE IF NOT EXISTS Picture(pId INTEGER,surface INTEGER,fileName TEXT,PRIMARY KEY(pId,surface));CREATE TABLE IF NOT EXISTS Object (objId INTEGER PRIMARY KEY AUTOINCREMENT,name TEXT,fileName TEXT);CREATE TABLE IF NOT EXISTS ObjectSpec(specId INTEGER,objId INTEGER,x_Coor REAL,y_Coor REAL,z_Coor REAL,x_rotate,y_rotate,z_rotate,x_scale,y_scale,z_scale, PRIMARY KEY(specId, objId)); CREATE TABLE IF NOT EXISTS ARSpace(spaceId INTEGER PRIMARY KEY AUTOINCREMENT,pId INTEGER,specId INTEGER,FOREIGN KEY (pId) REFERENCES Picture(pId),FOREIGN KEY (specId) REFERENCES ObjectSpec(specId)); "
        if sqlite3_exec(db, createTableQuery, nil, nil, nil) != SQLITE_OK{
            print("ERROR while creating table")
            return
        }
        print("create successful")
    }
    func insertInitData(){
        let initInsertQuery = "INSERT INTO Object (name, fileName) VALUES ('table','table.dae'), ('chair','chair.dae'), ('plant1','plant1.dae'), ('toilet','toilet.dae');"
        if sqlite3_exec(db, initInsertQuery, nil, nil, nil) != SQLITE_OK{
            print("Error while inserting data")
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
}
