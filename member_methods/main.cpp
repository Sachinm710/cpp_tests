#include <iostream>
#include <vector>
#include<string>

using namespace std;

class Account{
private:
    // attributes
    string name;
    double balance;
public:    
    //methods
    // declared inline
    void set_balance (double bal) {balance = bal;}
    double get_balance () {return balance;}
    
    // declared outside the class
    void set_name(string n);
    string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n){
    name = n;
}

string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    balance += amount;
    return true;
}

bool Account::withdraw(double amount){
    if(balance-amount>=0){
        balance -= amount;
        return balance;
    }
    else{
        return false;
    }
}

int main(){

    // Accessing the private member from the public class
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);
    
    return 0;
}
