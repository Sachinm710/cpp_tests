#include <iostream>

class Base{
public:
    void say_hello() const{
       std::cout << "This is Base class" << std::endl; 
    }
};

class Derived : public Base{
public:
    void say_hello(){
        std::cout << "This is Derived class" << std::endl;
    }
};

void greetings(const Base &obj){
    std::cout << "Greetings! ";
    obj.say_hello();
}

int main(){
    Base b;
    b.say_hello();
    

    Derived d;
    d.say_hello();

    greetings(b);
    greetings(d);

    Base *ptr = new Derived;
    ptr->say_hello();

    // TODO : Learn on smart pointers

    delete ptr;
}