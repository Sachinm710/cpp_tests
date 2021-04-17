#include <iostream>

// NOTE: If final is used in the end of class definition, it cannot be derived
// by another class, same goes for a method

class Base{
public:
    virtual void say_hello() const{
       std::cout << "This is Base class" << std::endl; 
    }
};

class Derived : public Base{
public:
    virtual void say_hello()const override{
        std::cout << "This is Derived class" << std::endl;
    }
};

int main(){
    Base b;
    b.say_hello();
    

    Derived d;
    d.say_hello();

    Base *ptr = new Derived;
    ptr->say_hello();

    delete ptr;
}