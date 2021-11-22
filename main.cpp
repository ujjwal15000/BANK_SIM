#include <iostream>
#include <string.h>
#include "Customer.h"
#include "Money.h"
using namespace std;

Money getMon(string s){
    long long d = 0;
    int c = 0;
    s+='.';
    std::string tmp = "";
    std::string v[2];
    int i = 0;
    for(char c:s){
        if(c!='.')
            tmp+=c;
        else{
            v[i++] = tmp;
            tmp = "";
        }
    }
    d = stoll(v[0]);
    c = stoi(v[1]);
    Money money(d, c);
    return money;
}

int main(){
    string Initial_Money = "103.90";
    Customer customer(103, 25);
    while(true){
        cout << "Select An Option" << endl;
        cout << "1. Credit" << endl;
        cout << "2. Debit" << endl;
        cout << "3. Check-Balance" << endl;
        cout << "4. Exit" << endl;
        int x;
        cin >> x;
        bool f = false;
        switch (x){
            case 1:{
                string s;
                cin >> s;
                Money m = getMon(s);
                customer.Credit(m);
                break;
            }
            case 2:{
                string s;
                cin >> s;
                Money m = getMon(s);
                customer.Debit(m);
                break;
            }
            case 3:{
                customer.CheckBalance();
                break;
            }
            case 4:{
                f = true;
                break;
            }
            default:
                cout << "Enter Valid Input" << endl;
        }
        if(f)
            break;
        
    }
    return 0;
}