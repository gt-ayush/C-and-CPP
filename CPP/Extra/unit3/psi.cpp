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
    d.display(); // Calls the derived class's display function
    d.Base::display(); // Calls the base class's display function

    return 0;

}