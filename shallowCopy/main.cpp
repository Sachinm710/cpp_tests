// Section 13
// Copy Constructor
#include <iostream>
#include <string>

using namespace std;

class Shallow{
private:
    int *data;
public:
    void set_data_value(int d) {*data = d;}
    int get_data_value() {return *data;}
    
    //constructor
    Shallow(int d);
    //Copy constructor
    Shallow(const Shallow &source);
    //Destructor
    ~Shallow();
};

Shallow::Shallow(int d){
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)
    :data(source.data){
     cout<< "Copy constructor is called" << endl;
}

Shallow::~Shallow(){
    delete data;
    cout<< "Destructor is called" << endl; 
}

void display_shallow(Shallow s){
    cout << s.get_data_value() << endl;
}

int main(){
    Shallow obj1 {100};
    display_shallow(obj1);
}