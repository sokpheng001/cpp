#include <iostream>
#include "logIn.h"
#include "register.h"
#include "accountSetting.h"
//#include "forgotPassword.h"

using namespace std;

void list() {
    cout << "======================================================================" << endl;
    cout << "                                List                                  " << endl;
    cout << "======================================================================" << endl;
    cout << "                       1. Login Account                               " << endl;
    cout << "                       2. Register Account                            " << endl;
    cout << "                       3. Account setting                             " << endl;
    cout << "                       0. Exit                                        " << endl;
    cout << "======================================================================" << endl;
}

void accountSettingList() {
    cout << "======================================================================" << endl;
    cout << "                        Account Settings List                         " << endl;
    cout << "======================================================================" << endl;
    cout << "                       1. Change Email                                " << endl;
    cout << "                       2. Change Password                             " << endl;
    cout << "                       3. Change Username                             " << endl;
    cout << "                       4. Delete Account                              " << endl;
    cout << "                       0. Exit                                        " << endl;
    cout << "======================================================================" << endl;
}

int main() {
    system("cls");

    short op;
    do {
        list();
        cout << "[+] Insert your option : "; cin >> op;
        switch(op) {
            case 1 : { // login
                system("cls");
                cout << "======================================================================" << endl;
                cout << "                            Login Account                             " << endl;
                cout << "======================================================================" << endl;
                Login user1;
                user1.loginUser();
                cout << "======================================================================" << endl;
                break;
            }
            case 2 : { // register
                system("cls");
                cout << "======================================================================" << endl;
                cout << "                          Register Account                            " << endl;
                cout << "======================================================================" << endl;
                Register user2;
                user2.setUserRegister();
                cout << "======================================================================" << endl;
                break;
            }
            case 3 : {
                system("cls");
                cout << "======================================================================" << endl;
                cout << "                           Account Setting                            "<< endl << endl;
                accountSettingList();
                cout << "======================================================================" << endl;
                AccountSettingImpl user3;
                short op2;
                do {
                cout << "[+] Insert your option : "; cin >> op2;
                    switch (op2) {
                        case 1 : {
                            user3.changeEmail();
                            break;
                        }
                        case 2 : {
                            user3.changePassword();
                            break;
                        }
                        case 3 : {
                            user3.changeUsername();
                            break;
                        }
                        case 4 : {
                            user3.deleteAccount();
                            break;
                        }
                        case 0 : {
                            cout << "Exiting..." << endl;
                            break;
                        }
                        default : {
                            cout << "INVALID OPTION!" << endl;
                            break;
                        }
                    }
                } while(op2);
                break;
            }
            case 0 : {
                cout << "Exiting..." << endl;
                break;
            }
            default : {
                cout << "INVALID OPTION!" << endl;
            }
        }
    } while(op);

    return 0;
}