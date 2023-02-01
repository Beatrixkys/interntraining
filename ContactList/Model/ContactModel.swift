//
//  ContactModel.swift
//  ContactList
//
//  Created by Beatrix Kang on 18/01/2023.
//

import Foundation
import RxCocoa
import RxSwift
import FirebaseFirestore

struct Contact{
    let name: String
    let email: String
    let number: String
}



struct ContactViewModel {
    //variable that is an observable sequence and also can observe
    var items = PublishSubject <[Contact]> ()
    
    private var db = Firestore.firestore()
  
    
    
    func fetchItem() {
        var contacts : [Contact] = [Contact(name: "Nom Nom", email: "nom@mail.com", number: "12345678")]
        
        db.collection("contacts").getDocuments() { (querySnapshot, err) in
            if let err = err {
                print("Error getting documents: \(err)")
            } else {
                if let snapshotDocuments = querySnapshot?.documents{
                    for doc in snapshotDocuments {
                        let data = doc.data()
                        if let contactName = data ["name"] as? String, let contactEmail = data ["email"] as? String, let contactNumber = data ["number"] as? String {
                            let newContact = Contact(name: contactName, email: contactEmail, number: contactNumber)
                            contacts.append(newContact)
                        }
                        
                        //print (contacts[1].name)
                    }
                }
                //observing the items inserted
                items.onNext(contacts)
                //observed the data change is completed
                items.onCompleted()
                
                
                
            }
        }
        
        
        
        
    }
    
    
    
    
    
}

