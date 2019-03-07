//
//  AppDelegate.swift
//  Auth0Sample
//
//  Created by Atsushi Jike on 2019/03/05.
//  Copyright © 2019 Atsushi Jike. All rights reserved.
//

import Cocoa
import Auth0

@NSApplicationMain
class AppDelegate: NSObject, NSApplicationDelegate {
    @IBOutlet weak var emailField: NSTextField!
    @IBOutlet weak var passField: NSTextField!
    
    @IBOutlet weak var window: NSWindow!


    func applicationDidFinishLaunching(_ aNotification: Notification) {
        emailField.stringValue = UserDefaults.standard.value(forKey: "email") as? String ?? ""
        passField.stringValue = UserDefaults.standard.value(forKey: "pass") as? String ?? ""
    }

    func applicationWillTerminate(_ aNotification: Notification) {
        // Insert code here to tear down your application
    }
    
    @IBAction func loginAction(_ sender: Any) {
        let email = emailField.stringValue
        let pass = passField.stringValue
        UserDefaults.standard.set(email, forKey: "email")
        UserDefaults.standard.set(pass, forKey: "pass")
        Auth0.authentication().login(usernameOrEmail: email,
                                     password: pass,
                                     realm: "Username-Password-Authentication",
                                     scope: "openid")
            .start { (result) in
                let credential = result
                print(credential)
        }
    }
}

