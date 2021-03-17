#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "account.h"

class Savings_Account : public Account
{
public:
    double interest_rate;
    void deposit(double amount);
    void withdraw(double amount);
    Savings_Account();
    ~Savings_Account();
};

#endif