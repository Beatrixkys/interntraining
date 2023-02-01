//
//  AssetViewModel.swift
//  assetView
//
//  Created by Beatrix Kang on 27/01/2023.
//

import Foundation
import RxCocoa
import RxSwift
import FirebaseFirestore

protocol Fetcher{
    func fetchItem()
}

protocol Adder{
    func addItem(name: String, desc: String)
}


struct AssetViewModel: Fetcher{
    
    var assets = PublishSubject <[Asset]> ()
    
    private var db = Firestore.firestore()
    
    
    func fetchItem() {
        var assetList: [Asset] = [Asset(name: "adfhdfh", description: "ahdfhdf")]
        db.collection("assets").getDocuments() { (querySnapshot, err) in
            if let err = err {
                print("Error getting documents: \(err)")
            } else {
                if let snapshotDocuments = querySnapshot?.documents{
                    for doc in snapshotDocuments {
                        let data = doc.data()
                        if let aName = data ["name"] as? String, let aDesc = data ["description"] as? String {
                            let newAst = Asset(name: aName, description: aDesc)
                            assetList.append(newAst)
                        }
                    }
                }
                //observing the items inserted
                assets.onNext(assetList)
                //observed the data change is completed
                assets.onCompleted()
            }
        }
    }
    
}

extension AssetViewModel:Adder{
    func addItem(name:String, desc:String) {
        db.collection("assets").addDocument(data: ["name": name , "description": desc ])
    }
}
