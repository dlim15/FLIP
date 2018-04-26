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
        let createTableQuery = "CREATE TABLE IF NOT EXISTS Picture (pid INTEGER PRIMARY KEY AUTOINCREMENT,fileName TEXT,surface INTEGER);CREATE TABLE IF NOT EXISTS Bundle (bid INTEGER,pid INTEGER,FOREIGN KEY (pid) REFERENCES Picture(pid),PRIMARY KEY(bid,pid)); "
        if sqlite3_exec(db, createTableQuery, nil, nil, nil) != SQLITE_OK{
            print("ERROR while creating table")
            return
        }
        print("create successful")
    }
}
