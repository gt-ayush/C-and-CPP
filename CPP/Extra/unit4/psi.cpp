//public mode inheritance
#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "This is the base class." << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "This is the derived class." << endl;
    }
};

int main() {
    Derived d;
    d.display(); 
    d.Base::display(); 

    return 0;

}