#include <iostream>

using namespace std;

class Base{
public:
    int a{0};
    void display(){
        cout << a << "," << b << "," << c << endl;
    }
protected:
    int b{0};
private:
    int c{0};
};

class Derived : public Base{
 // a will be public
 // b will be protected
 // c is not accesible
 public:
    void access_base_members(){
        a = 100;
        b = 200;
    }
};

int main(){
    cout << "=== Base member access from base objects==="<< endl;
    Base base;
    base.a = 100; // OK
    // base.b = 200; // compiler error
    // base.c = 300; // compiler error

    cout << "=== Base member access from derived objects==="<< endl;
    Derived d;
    d.a = 100;
    // d.d = 200; // compiler error
    // d.c = 300; // compiler error

    return 0;
}