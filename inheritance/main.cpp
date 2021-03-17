#include <iostream>
#include "account.h"
#include "savings_account.h"

using namespace std;

int main(){
    cout << " == Account ==" << endl;
    Account acc {};
    acc.deposit(2000);
    acc.withdraw(500);
    cout << " == savings Account ==" << endl;
    Savings_Account save_acc {};
    acc.deposit(1000);
    acc.withdraw(250);
    return 0;
}