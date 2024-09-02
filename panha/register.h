#pragma once

#include <iostream>
#include <vector>

using namespace std;

    vector<string> usernames;
    vector<string> emails;
    vector<string> passwords;

class Register{
    private :
        string username;
        string email;
        string password;

    public :    

    void setUserRegister() {
        cout << "Enter your username : ";
        cin.ignore();
        getline(cin, this->username);
        usernames.push_back(this->username);

        cout << "Enter your email : ";
        cin >> this->email;
        emails.push_back(this->email);

        cout << "Enter your password : ";
        cin.ignore();
        getline(cin, this->password);
        passwords.push_back(this->password);
        
        cout << "Register successfully." << endl;

    }

};
