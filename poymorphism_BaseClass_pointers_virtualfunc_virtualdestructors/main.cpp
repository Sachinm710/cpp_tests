#include <iostream>

// Use of virtual functions with base class pointers
class Account{
public:
    virtual void withdraw (double amount) {
        std::cout << "Account::Withdraw" << std::endl;
    }
    virtual ~Account() {std::cout << "Account class Destructor" << std::endl;}
};

class savings_account : public Account{
public:
    virtual void withdraw (double amount) {
        std::cout << "savings_account::Withdraw" << std::endl;
    }
    virtual ~savings_account() {std::cout << "savings_account class Destructor" << std::endl;}
};

class Trust : public Account{
public:
    virtual void withdraw (double amount) {
        std::cout << "Trust::Withdraw" << std::endl;
    }
    virtual ~Trust() {std::cout << "Trust class Destructor" << std::endl;}
};

int main(){
    Account *p1 = new Account();
    Account *p2 = new savings_account();
    Account *p3 = new Trust();
    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    std::cout << "---Clean up---" << std::endl;
    delete p1;
    delete p2;
    delete p3;
}