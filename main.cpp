#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void baker(int &amount) {
    int n, v, value,amount1;
    string p, password;
    string user[] = {"","umar", "salman", "rayan", "masab", "ali", "tahir", "uzair", "faiq", "shaiq", "usman"};
    cout << "\n1=Enter 1 for Deposit";
    cout << "\n2=Enter 2 for Withdraw";
    cout << "\n3=Enter 3 to log out ";
    cin >> v;
    if (v == 1) {
        cout << "\nEnter your amount"<<endl;
        cin >> value;
        if (value < 0) {
            cout << "\n__________________________________________________________________";
            cout << "\n                       !Invalid Input!                            ";
            cout << "\n__________________________________________________________________";
        } else {
            amount = amount + value;
            cout << "\nYour new amount is" << amount;
//            cout <<"\nWrite your new amount here"<<endl;
//            cin >>amount1;
            baker(amount);
        }
    } else if (v == 2) {
        cout << "\nEnter your amount";
        cin >> value;
        if (value > amount) {
            cout << "\n__________________________________________________________________";
            cout << "\n                     !You dont have enough money!                 ";
            cout << "\n__________________________________________________________________";
        } else if (value < 0) {
            cout << "\n__________________________________________________________________";
            cout << "\n                       !Invalid Input!                            ";
            cout << "\n__________________________________________________________________";
        } else {
            amount = amount-value ;
            cout << "\nYou withdraw"<< value;
            cout<<"\nYour remaining amount is" << amount;
//            cout <<"\nWrite your remaining amount here"<<endl;
//            cin >>amount;
            baker(amount);
        }
    } else if (v == 3) {
    cout <<"\nYou logged out";
    }
}
    int main() {
        int amount=600;
        while (true){
        string p;
        int n;
        string user[] = {"umar", "salman", "rayan", "masab", "ali", "tahir", "uzair", "faiq", "shaiq", "usman"};
        string password[] = {"1223f", "ads423", "kj3", "jko9", "0ikh", "2sd", "4fdsc", "6ggv", "8jk", "5nkl"};
        cout << "\n______________________________________________________________________________________";
        cout << "\n0=umar\n1=salman\n2=rayan\n3=masab\n4=ali\n5=tahir\n6=uzair\n7=faiq\n8=shaiq\n9=usman";
        cout << "\n______________________________________________________________________________________";
        cout << "\nEnter Your token Number";
        cin >> n;
        if (n <= 10) {
            cout << "\nWelcome!" << user[n];
            cout << "\nEnter YOur Password:";
            cin >> p;
            if (p == password[n]) {
                cout << "\nWelcome!" << user[n];
                baker(amount);
            } else {
                cout << "\n__________________________________________________________________";
                cout << "\n                       !Invalid Input!                            ";
                cout << "\n__________________________________________________________________";
            }
        } else {
            cout << "\n_____________________________________________________________";
            cout << "\n                    !Invalid Input!                          ";
            cout << "\n_____________________________________________________________";
        }
        }
}

