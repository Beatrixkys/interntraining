//
//  ViewController.swift
//  ContactList
//
//  Created by Beatrix Kang on 18/01/2023.
//

import UIKit
import RxSwift
import FirebaseAuth

class ViewController: UIViewController {
    
    let disposeBag = DisposeBag()
    var viewModel = ContactViewModel()
    var contacts : [Contact] = []
    
    @IBOutlet weak var TableView: UITableView!
    override func viewDidLoad() {
        super.viewDidLoad()
        navigationItem.hidesBackButton = true
        bindTableData()
        // Do any additional setup after loading the view.
    }
    @IBAction func logOutPressed(_ sender: UIButton) {
        do {
            try Auth.auth().signOut()
            navigationController?.popToRootViewController(animated: true)
        } catch let signOutError as NSError {
            print (signOutError)
        }
    }
    
    func bindTableData(){
        //bind items to table
        viewModel.items.bind(to: TableView.rx.items(cellIdentifier: "ContactCell"))
        {row, model, cell in
            cell.textLabel?.text = model.name
            self.contacts.append(model)
            
        }.disposed(by: disposeBag)
        
        
        //bind model selected handler
        TableView.rx.modelSelected(Contact.self).bind {
            contact in print (contact.name)
        }.disposed(by: disposeBag)
        
        //fetch items
        viewModel.fetchItem()
        
        //The databse items are passed in, but not saved to the fetch items
        print (viewModel.items)
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        if segue.identifier == "goToContact" {
            
            //if the location is go to result, set the view controller as the destination aka result view controller
            
            let destinationVc = segue.destination as! ContactViewController
            
            let contactIndex = TableView.indexPathForSelectedRow?.row
                
            
            if contactIndex != nil {
                destinationVc.contact = contacts [contactIndex!]
            }
           
            
            
        }
    }
    
    
    
    
    

}

