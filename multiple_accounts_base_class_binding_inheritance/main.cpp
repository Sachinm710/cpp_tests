#include <iostream>
#include "savings_account.h"

using namespace std;

int main(){
    Account a1{1000.0};
    cout << a1 << endl;

    a1.deposit(500.0);
    cout << a1 << endl;

    a1.withdraw(2000.0);
    cout << a1 << endl;

    Savings_Account s1 {1000, 5};
    cout << s1 << endl;

    s1.deposit(1000);
    cout << s1 << endl;

    s1.withdraw(2000);
    cout << s1 << endl;
    return 0;

}