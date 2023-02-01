//
//  main.swift
//  SOLID
//
//  Created by Beatrix Kang on 25/01/2023.
//

import Foundation


//SOLID Principles

//Single Responsibility
//every class should be responsible for only one function


//Use case: User wants to have control over assets



//Wrong way

//everything is in one class
class AssetAddHandler {
    let asset = "Sample"
    
    func pushData (_ data:String){
        print ("data pushed")
    }
    
    func addData(_ data:String ){
        print ("data pushed")
    }
    
    func handleAsset(){
        addData(asset)
        pushData(asset)
    }
    
    
    
}



//Right way
class AssetsAddHandler {
    let pushHandler : PushHandler
    let addHandler : AddHandler
    
    init (pushHandler: PushHandler, addHandler: AddHandler) {
        self.pushHandler = pushHandler
        self.addHandler = addHandler
    }
    
    func handleAsset(){
        var asset:String = "Sample"
        pushHandler.pushData(asset)
        addHandler.addData(asset)
    }
    
}


class PushHandler {
    func pushData (_ data:String){
        
    }
}

class AddHandler {
    func addData(_ data:String ){
        
    }
}


//Open closed principle

//open for extension
//change behaviour of a class without efforts

//closed for modification
//extend class without changing implementation

//can be done with prototocols

//use case: User wants to view assets and quantity items


//Wrong way
class Asset {
    let name: String
    
    init(name: String ) {
        self.name = name
    }
    //print details functions has to be added to the QI class too
   func printDetails() -> String {
        return "I have \(self.name)."
    }
}


class QuantityItem {
    let name: String
    
    init(name: String ) {
        self.name = name
    }
    //should be allowed to extend
   func printDetails() -> String {
        return "I have \(self.name)."
    }
}

class PrintAssets {
    func printData(){
        let assets = [ Asset(name: "A1")]
        
        assets.forEach {asset in print(asset.printDetails())}
        
        let quantityItems = [ QuantityItem(name: "Q1")]
        
        //print details is modified again and needed to be called again here, violating the rule
        quantityItems.forEach {qi in print(qi.printDetails())}
        
    }
}


//use protocol, or Interface in Android
protocol Printable {
    func printDetails ()->String
}

class AssetC:Printable {
    let name: String
    
    init(name: String ) {
        self.name = name
    }
   func printDetails() -> String {
        return "I have \(self.name)."
    }
}

class QuantityItemC:Printable {
    let name: String
    
    init(name: String ) {
        self.name = name
    }
    //extended and modified without affecting other class bc of protocol
   func printDetails() -> String {
        return "I have \(self.name) of  bike."
    }
}

class PrintableAssets {
    func printData(){
        let customerData:[Printable] = [ AssetC(name: "A1"), QuantityItemC(name: "Q1")]
        
        //called only once as a joint
        customerData.forEach {cd in print(cd.printDetails())}
        
    }
}


//Liskov Substituition
//applies to classes
//if theres a subclass, you should be able to use the function of the parent without knowing it 


class Details {
    func printName(){
        
    }
    
    func printQuantity(){
        
    }
}

class Asst: Details{
    override func printName() {
    }
    
    //assets dont have quantity, its irrelevant to print quantity
}

class QtyItem: Details {
    override func printName() {
        
    }
    override func printQuantity() {
        
    }
    
}

//Right Way
class Detail {
    func printName(){
        
    }
}

class QIDeet:Detail{
    
    func printQuantity(){
        
    }
}

//extends detail without forcibly implementing any extra functionality that isnt needed


class Ast: Detail{
    
}


class QItem: QIDeet {
    
}


//Interface Segregation Principle
//breaking down the protocol/interface so it only serves a singular purpose
//else the inherited have to continously update and implement new methods


//Wrong way


//starts off this way
protocol LocationGenerator{
    func viewCoordinates()
}

class LocationList: LocationGenerator{
    func viewCoordinates() {
    }
}

//if want to extend protocol
/*
protocol LocationGenerator{
    func viewCoordinates()
    func generateRoute()
}

class LocationList: LocationGenerator{
    func viewCoordinates() {
    }
 //this one has to add generateRoute too even though list does not need a route generator
}*/


//Right Way

protocol CoordinateGenerator{
    func viewCoordinates()
}

protocol RouteGenerator{
    func generateRoute()
}


//by splitting up the protocols, the following can implement the protocols as needed for the classs functions and arent forced to implement functyions it does nto need
class LocationLists:CoordinateGenerator {
    func viewCoordinates() {
        
    }
    
}

class LocationDirections: RouteGenerator{
    func generateRoute() {
        
    }
}

class LocationMap:CoordinateGenerator, RouteGenerator{
    func viewCoordinates(){
        
    }
    
    func generateRoute() {
    }
}


//Dependency Inversion Principle

//Wrong Way

//low level
class BTManager {
    func scan (rssi:String) {
        
    }
}

//high level
class BTHandler{
    //call the class then modify it
    let btManager = BTManager()
    func handle (rssi: String){
        btManager.scan(rssi: "wee")
    }
}

//the high levle package has to depend on the low level. Not reusable anymore


//Right Way

protocol BT{
    func scan (rssi:String)
}

class BLEScanner:BT{
    func scan(rssi: String) {
        
    }
}

class BTDeviceScanner:BT{
    func scan(rssi: String) {
    }
}
