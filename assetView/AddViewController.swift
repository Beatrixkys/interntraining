//
//  AddViewController.swift
//  assetView
//
//  Created by Beatrix Kang on 27/01/2023.
//

import UIKit

class AddViewController: UIViewController {
    
    
    @IBOutlet var astName: UITextField!
    @IBOutlet var astDescription: UITextField!
    var assetModel = AssetViewModel()
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        astName.delegate = self
        astDescription.delegate = self
        // Do any additional setup after loading the view.
    }
    
    
    @IBAction func addBtnPressed(_ sender: UIButton) {
        if let name = astName.text, let desc =  astDescription.text{
            assetModel.addItem(name: name, desc: desc)
            navigationController?.popViewController(animated: true)
        }else {
            
            print("Error")
        }
    }
    
}
    


extension AddViewController: UITextFieldDelegate {
    
    func textFieldShouldReturn(_ textField: UITextField) -> Bool {
        astName.endEditing(true)
        astDescription.endEditing(true)
        return true
    }
    
  
    
}
