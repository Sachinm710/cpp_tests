#include <iostream>
#include "savings_account.h"

using namespace std;

int main(){
    Account a1{1000.0};
    cout << a1 << endl;

    a1.deposit(500.0);
    cout << a1 << endl;
}