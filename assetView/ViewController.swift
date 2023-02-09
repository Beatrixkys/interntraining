//
//  ViewController.swift
//  assetView
//
//  Created by Beatrix Kang on 26/01/2023.
//

import UIKit
import RxSwift
import FirebaseFirestore

class ViewController: UIViewController {

    let disposeBag = DisposeBag()
    var assetModel = AssetViewModel()
    var assetL : [Asset] = []
    //var assets = PublishSubject <[Asset]> ()
    private var db = Firestore.firestore()
    
    @IBOutlet var TableView: UITableView!
    
    //add table view that displays the collection retrieved w rx
    override func viewDidLoad() {
        super.viewDidLoad()
        fetchItem()
        TableView.delegate = self
        TableView.dataSource = self
        //TableView.reloadData()
        // Do any additional setup after loading the view.
    }
    

    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(true)
        //assetL=[]
        fetchItem()
        
    }
    
    
    //switch to regular table view
    /*
    func bindTableData(){
        
        //bind items to table
        assets.asObservable().bind(to: TableView.rx.items(cellIdentifier: "AssetCell"))
        {row, model, cell in
            cell.textLabel?.text = model.name
            self.assetL.append(model)
        }.disposed(by: disposeBag)
        
        
        //bind model selected handler
        TableView.rx.modelSelected(Asset.self).bind {
            asset in print (asset.name)
            
        }.disposed(by: disposeBag)
        
        //fetch items
        fetchItem()
        TableView.reloadData()
        
        
    }
    */
    
    
    func fetchItem() {
        db.collection("assets").getDocuments() { (querySnapshot, err) in
            if let err = err {
                print("Error getting documents: \(err)")
            } else {
                if let snapshotDocuments = querySnapshot?.documents{
                    self.assetL = []
                    for doc in snapshotDocuments {
                        let data = doc.data()
                        if let aName = data ["name"] as? String, let aDesc = data ["description"] as? String {
                            let newAst = Asset(name: aName, description: aDesc)
                            self.assetL.append(newAst)
                            
                        }
                    }
                }
                
                self.TableView.reloadData()
            }
            
        }
        //
    }
    
    
    
    

 

}



extension ViewController: UITableViewDataSource{
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return assetL.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "AssetCell", for: indexPath)
        
        var content = cell.defaultContentConfiguration()
        //var content = cell.defaultContentConfiguration()
        //fetchItem()
        
        let asset = assetL [indexPath.row]
        content.text = asset.name
        content.secondaryText = asset.description
        cell.contentConfiguration = content
        
        return cell
    }
    
    
}


extension ViewController: UITableViewDelegate {
    
}

