#include <iostream>
#include "savings_account.h"


Savings_Account::Savings_Account(double balance, double interest_rate)
    :Account(balance), interest_rate{interest_rate} {
}

Savings_Account::Savings_Account()
    :Savings_Account{0.0, 0.0}{
}
void Savings_Account::deposit(double amount, double interest_rate){
    amount = amount + (amount * interest_rate);
    Account::deposit(amount);
}

Savings_Account::~Savings_Account(){
    cout << "Savings?account Destructor called" << endl;
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &Account){
    os << "Savings account balance" << Account.balance << "Interest rate" << Account.interest_rate;
    return os;
}