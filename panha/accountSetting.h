#pragma once 
// account setting :
// change email, username, password
// delete account
#include <iostream>
#include "register.h"

using namespace std;

class AccountSetting{
    public :    
        virtual void changeEmail() = 0;
        virtual void changeUsername() = 0;
        virtual void changePassword() = 0;
        virtual void deleteAccount() = 0;
};

class AccountSettingImpl : public AccountSetting{
    private :
        string email, password;
    
    public :
        void changeEmail() override{
            cout << "Enter your password : ";
            cin.ignore();
            getline(cin, this->password);

            bool isChanged = 0;
            for (int i = 0; i < emails.size(); i++) {
                if (this->password == passwords[i]) {
                    cout << "Enter your new email : ";
                    cin >> emails[i];
                    isChanged = 1;
                    cout << "Email changed succesfully." << endl;
                    break;
                }
            }
            if (!isChanged) cout << "Incorrect password." << endl;
        }

        void changeUsername() override{
            cout << "Enter your password : ";
            cin.ignore();
            getline(cin, this->password);

            bool isChanged = 0;
            for (int i = 0; i < usernames.size(); i++) {
                if (this->password == passwords[i]) {
                    cout << "Enter your new password : ";
                    getline(cin, passwords[i]);
                    isChanged = 1;
                    cout << "Password changed successfully." << endl;
                    break;
                }
            }
            if (!isChanged) cout << "Incorrect password." << endl;
        }

        void changePassword() override{
            cout << "Enter your old password : ";
            cin.ignore();
            getline(cin, this->password);

            for (int i = 0; i < passwords.size(); i++) {
                if (this->password == passwords[i]) {
                    cout << "Enter your new password : ";
                    getline(cin, passwords[i]);

                    string verPassword = passwords[i];
                    do {
                        cout << "Enter your new password again to confirm : ";
                        getline(cin, this->password);
                        if (this->password == verPassword) {
                            cout << "Password changed successfully." << endl;
                            break;
                        }
                        else cout << "Password incorrect." << endl;
                    } while (this->password == verPassword);
                }
            }
        }

        void deleteAccount() override{
            cout << "Enter your email : ";
            cin >> this->email;
            cout << "Enter your password : ";
            cin.ignore();
            getline(cin, this->password);

            bool isDelete = 0;
            char choice;
            for (int i = 0; i < emails.size(); i++) {
                if (this->email == emails[i]) {
                    cout << "Are you sure that you want to delete this account? (Y/N) : ";
                    cin >> choice;
                    if (choice == 'Y' || choice == 'y') {
                        emails.erase(emails.begin() + i);
                        usernames.erase(usernames.begin() + i);
                        passwords.erase(passwords.begin() + i);
                        cout << "Your account is deleted." << endl;
                        isDelete = 1;
                        break;
                    }
                    else break;
                }
            }
            if(!isDelete) cout << "Incorrect email or password." << endl;
        }
};

