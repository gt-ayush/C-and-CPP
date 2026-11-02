//protected mode inheritance
#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "This is the base class." << endl;
    }
};

class Derived : protected Base {
public:
    void display() {
        cout << "This is the derived class." << endl;
    }

    void displayBase() {
        Base::display();
    }
};

int main() {
    Derived d;
    d.display(); 
    d.displayBase();

    return 0;

}