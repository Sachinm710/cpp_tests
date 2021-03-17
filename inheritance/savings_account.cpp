#include <iostream>
#include "savings_account.h"


Savings_Account::Savings_Account()
    : interest_rate {3.0} {
}

Savings_Account::~Savings_Account(){
}


void Savings_Account::deposit(double amount){
    std::cout << "Account deposit" << amount << std::endl;
}

void Savings_Account::withdraw(double amount){
    std::cout << "withdraw deposit" << amount << std::endl;
}