//
//  RegisterViewController.swift
//  ContactList
//
//  Created by Beatrix Kang on 19/01/2023.
//

import UIKit
import FirebaseAuth

class RegisterViewController: UIViewController {

    @IBOutlet var passwordTextField: UITextField!
    @IBOutlet var emailTextField: UITextField!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        emailTextField.delegate = self
        passwordTextField.delegate = self
        // Do any additional setup after loading the view.
    }
    

    @IBAction func onRegisterPressed(_ sender: UIButton) {
        if let email = emailTextField.text, let password = passwordTextField.text{
            print("auth")
            Auth.auth().createUser(withEmail: email, password: password)
            { authResult, error in
                if let e = error{
                print (e)
                }else {
                    
                    self.performSegue(withIdentifier: "showContactScreen", sender: self) }
            }
        }
    }
    
     @IBAction func onLoginPressed(_ sender: Any) {
         if let email = emailTextField.text, let password = passwordTextField.text{
             Auth.auth().signIn(withEmail: email, password: password)
             { authResult, error in
                 if let e = error{
                 print (e)
                     self.showToast(message: "Error Occurred", font: .systemFont(ofSize: 20.0))
                 }else {
                     
                     self.performSegue(withIdentifier: "showContactScreen", sender: self) }
             }
         }
         
     }
     
    
    
    
    /*
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }*/
  
}


extension RegisterViewController: UITextFieldDelegate {
    
    func textFieldShouldReturn(_ textField: UITextField) -> Bool {
        emailTextField.endEditing(true)
        passwordTextField.endEditing(true)
        return true
    }
    
    func textFieldDidEndEditing(_ textField: UITextField) {
        //emailTextField.text = ""
        //passwordTextField.text = ""
    }
    
}

extension UIViewController {

func showToast(message : String, font: UIFont) {

    let toastLabel = UILabel(frame: CGRect(x: self.view.frame.size.width/2 - 75, y: self.view.frame.size.height-100, width: 150, height: 100))
    toastLabel.backgroundColor = UIColor.black.withAlphaComponent(0.6)
    toastLabel.textColor = UIColor.white
    toastLabel.numberOfLines = 4
    toastLabel.font = font
    toastLabel.textAlignment = .center;
    toastLabel.text = message
    toastLabel.alpha = 1.0
    toastLabel.layer.cornerRadius = 10;
    toastLabel.clipsToBounds  =  true
    self.view.addSubview(toastLabel)
    UIView.animate(withDuration: 4.0, delay: 0.1, options: .curveEaseOut, animations: {
         toastLabel.alpha = 0.0
    }, completion: {(isCompleted) in
        toastLabel.removeFromSuperview()
    })
} }
