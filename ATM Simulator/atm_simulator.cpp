#include <iostream>
using namespace std;

int main() {
    double balance=1000;
    int choice;
    double amount;

    do {
        cout << "\nATM Menu\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ";
        cin >> choice;

        switch(choice) {
            case 1: cout << "Balance = " << balance << endl; break;
            case 2: cout << "Enter deposit: "; cin >> amount; balance+=amount; break;
            case 3: cout << "Enter withdraw: "; cin >> amount; 
                    if(amount<=balance) balance-=amount; 
                    else cout << "Insufficient funds\n"; break;
        }
    } while(choice!=4);

    return 0;
}
