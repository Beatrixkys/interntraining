//
//  ContactViewController.swift
//  ContactList
//
//  Created by Beatrix Kang on 18/01/2023.
//

import UIKit
import MessageUI

class ContactViewController: UIViewController {

  
    @IBOutlet weak var CEmail: UIButton!
    @IBOutlet weak var CNumber: UIButton!
    
    @IBOutlet var NameLabel: UILabel!
    var contact : Contact?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        NameLabel.text = contact?.name
        //print(contact?.name)
        CEmail.setTitle(contact?.email, for: .normal)
        CNumber.setTitle (contact?.number, for: .normal)
        
            
    }

    @IBAction func emailButtonPressed(_ sender: Any) {
        print ("Email Pressed")
       sendEmail()
    }
}

extension ContactViewController: MFMailComposeViewControllerDelegate{
    
    func sendEmail() {
        if MFMailComposeViewController.canSendMail() {
            let mail = MFMailComposeViewController()
            mail.mailComposeDelegate = self
            mail.setToRecipients([contact!.email])
            mail.setMessageBody("<p>You're so awesome!</p>", isHTML: true)

            present(mail, animated: true)
        } else {
            //cannot send, need to check config before implement 
            print ("Cannot send")
        }
    }
    
    func mailComposeController(_ controller: MFMailComposeViewController, didFinishWith result: MFMailComposeResult, error: Error?) {
        controller.dismiss(animated: true)
    }

    
    
}


