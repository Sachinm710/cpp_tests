#include <iostream>

// Use of virtual functions with base class pointers
class Account{
public:
    virtual void withdraw (double amount) {
        std::cout << "Account::Withdraw" << std::endl;
    }
};

class savings_account : public Account{
public:
    virtual void withdraw (double amount) {
        std::cout << "savings_account::Withdraw" << std::endl;
    }
};

class Trust : public Account{
public:
    virtual void withdraw (double amount) {
        std::cout << "Trust::Withdraw" << std::endl;
    }
};

void do_withdraw(Account &account, double amount){
    account.withdraw(amount);
}

int main(){
    Account a;
    Account &ref = a;
    ref.withdraw(1000); 

    Trust b;
    Account &ref1 = b;
    ref1.withdraw(500);

    Account a1;
    savings_account b1;
    Trust c1;
    do_withdraw(a1, 1000);
    do_withdraw(b1, 1000);
    do_withdraw(c1, 1000);


}