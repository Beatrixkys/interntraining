//
//  ViewController.swift
//  assetView
//
//  Created by Beatrix Kang on 26/01/2023.
//

import UIKit
import RxSwift


class ViewController: UIViewController {

    let disposeBag = DisposeBag()
    var assetModel = AssetViewModel()
    var assetL : [Asset] = []
    @IBOutlet var TableView: UITableView!
    
    //add table view that displays the collection retrieved w rx
    override func viewDidLoad() {
        super.viewDidLoad()
        bindTableData()
        // Do any additional setup after loading the view.
    }
    
    func bindTableData(){
        //bind items to table
        assetModel.assets.bind(to: TableView.rx.items(cellIdentifier: "AssetCell"))
        {row, model, cell in
            cell.textLabel?.text = model.name
            self.assetL.append(model)
        }.disposed(by: disposeBag)
        
        
        //bind model selected handler
        TableView.rx.modelSelected(Asset.self).bind {
            asset in print (asset.name)
        }.disposed(by: disposeBag)
        
        //fetch items
        assetModel.fetchItem()
        
    }

 

}

