#include <iostream>
#include <ostream>

class I_printable{
    friend std::ostream &operator<<(std::ostream &os, const I_printable &obj);
public:
    virtual void print(std::ostream &os) const = 0;
};

std::ostream &operator<<(std::ostream &os, const I_printable &obj){
    obj.print(os);
    return os;
}

class Account : public I_printable{
public:
    virtual void withdraw(double amount){
        std::cout << "In Account: Withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const override{
        os<<"Account display";
    }
    virtual ~Account() {}
};

class Checking: public Account{
public:
    virtual void withdraw(double amount)  override{
        std::cout << "In Checking: Withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const override{
        os<<"Account display";
    }
    virtual ~Checking() {}
};

class Savings: public Account{
public:
    virtual void withdraw(double amount) override{
        std::cout << "In Savings: Withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const override{
        os<<"Savings display";
    }
    virtual ~Savings() {}
};

class Trust: public Account{
public:
    virtual void withdraw(double amount) override{
        std::cout << "In Trust: Withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const override{
        os<<"Trust display";
    }
    virtual ~Trust() {}
};

int main(){
    Account *p1 = new Account();
    std::cout<< *p1 << std::endl;

    Account *p2 = new Savings();
    std::cout<< *p2 << std::endl;
}