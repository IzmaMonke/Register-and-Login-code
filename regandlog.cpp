#include <iostream>
#include <string>
using namespace std;

int main() {

    // Strings
    string NameR, PasswordR;
    string NameL, PasswordL;
    string choice, choiceRC, choiceL, choiceL1, choiceD, choiceC, choiceWP, choiceNw;
    string line;

    string sum = "+";

    string subt = "-";

    string mult = "*";

    string divide = "/";

    // Integers
    int n1, n2;

    // Characters
    char REGISTER;

    // Start of the program
    reg:
    cout << endl;
    cout << "           ///////////////////////////////" << endl;
    cout << "           Please REGISTER (type REGISTER)" << endl;
    cout << "           ///////////////////////////////" << endl;
    cout << endl;

    // Select choice
    cout << "           [1]"; cin >> choice;

    if (choice == "REGISTER") {
        namepassR:
        cout << endl;
        cout << "           ////////////////////////////////////" << endl;
        cout << "           Please enter your: Name and Password" << endl;
        cout << "           ////////////////////////////////////" << endl;
        cout << endl;
        cout << "           [1]"; cin >> NameR;
        cout << "           [2]"; cin >> PasswordR; cout << endl;
        passWR:
        if (PasswordR.size() < 7) {
            shpass:
            cout << "           ////////////////////////////////////////" << endl;
            cout << "           The password needs to be 7 digits longer" << endl;
            cout << "           ////////////////////////////////////////" << endl;
            cout << endl;

            cout << "           [1]"; cin >> PasswordR;
                if (PasswordR.size() < 7) {
                    goto shpass;
                }
                if (PasswordR.size() > 7) {
                    goto rev;
                }
            }
        else {
            rev:
            cout << endl;
            cout << "           //////////////////////" << endl;
            cout << "           So your name is: " << NameR << endl;
            cout << "           //////////////////////" << endl;
            cout << "           And your password is: " << PasswordR << endl;
            cout << "           //////////////////////" << endl << endl;
            cout << "           Is this correct?" << endl << "           [1]"; cin >> choiceRC; cout << endl;
                if (choiceRC == "Yes" || "YES" || "yes") {
                    cout << "           **************************************" << endl;
                    cout << "           Your account is officially created!!!!" << endl;
                    cout << "           **************************************" << endl;
                }
                else if (choiceRC == "NO") {
                    goto namepassR;
                }
        }

    cout << endl;
    cout << "           ////////////" << endl;
    cout << "           Please LOGIN" << endl;
    cout << "           ////////////" << endl;
    cout << endl;
    login:
    cout << "           [1]"; cin >> NameL;
    cout << "           [2]"; cin >> PasswordL;
    if (NameL == NameR && PasswordL == PasswordR) {
        cout << endl;
        cout << "           **********" << endl;
        cout << "           Logged in!" << endl;
        cout << "           **********" << endl;
        cout << endl;
        }
    else if (NameL != NameR && PasswordL != PasswordR) {
            cout << endl;
            cout << "           ////////////////////////////////////////////////" << endl;
            cout << "           The name or password are wrong, please try again" << endl;
            cout << "           ////////////////////////////////////////////////" << endl;
            cout << endl;
            goto login;
        }

        cout << "           ///////////////////////////////////" << endl;
        cout << "           You have only 1 program, CALCULATOR" << endl;
        cout << "           ///////////////////////////////////" << endl;
        cout << "           [1]"; cin >> choiceD;
        if (choiceD == "CALCULATOR") {
            calc:
            cout << endl;
            cout << "           ///////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
            cout << "           Make an operation only with +, -, / and *. First put the number then the operator and then the other number" << endl;
            cout << "           ///////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
            cout << endl;
            cout << "           [1]"; cin >> n1 >> choiceC >> n2;
            cout << endl;
            if (choiceC == sum) {
                cout << "           [R]" << n1 + n2 << endl;
            }
            else if (choiceC == subt) {
                cout << "           [R]" << n1 - n2 << endl;
            }
            else if (choiceC == mult) {
                cout << "           [R]" << n1 * n2 << endl;
            }
            else if (choiceC == divide) {
                cout << "           [R]" << n1 / n2 << endl;
            }
            goto calc;
            }
        }
        else if (choice != "REGISTER") {
            cout << endl;
            cout << "           //////////////////////////////////////////////////////////////////////////" << endl;
            cout << "           It seems like you did a typo, please try again make sure you type REGISTER" << endl;
            cout << "           //////////////////////////////////////////////////////////////////////////" << endl;
            cout << endl;
            goto reg;
        }
    }
