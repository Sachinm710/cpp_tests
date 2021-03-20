#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "account.h"

class Savings_Account : public Account{
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);
protected:
    double interest_rate;
public:
Savings_Account();
Savings_Account(double balance, double interest_rate);
void deposit(double amount);
};

#endif