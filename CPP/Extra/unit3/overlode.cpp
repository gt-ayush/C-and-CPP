#include <iostream>
using namespace std;

// oprator overloading is a feature in C++ that allows you to redefine the behavior of operators for user-defined types (classes). This enables you to use operators like +, -, *, /, etc., with objects of your own classes, making the code more intuitive and readable.

class Complex {
    private:
        double real;
        double imag;
    public:
        Complex(double r = 0, double i = 0);
        Complex operator+(const Complex& other);
        void display();
};

Complex::Complex(double r, double i) : real(r), imag(i) {}

Complex Complex::operator+(const Complex& other) { //why two times complex is used because the operator+ function returns a new Complex object that represents the sum of the two Complex numbers. The first Complex is the return type, indicating that the function will return a Complex object. The second Complex is the name of the class to which the operator+ function belongs, allowing us to access its members (real and imag) and perform the addition operation.
    return Complex(real + other.real, imag + other.imag);
}

void Complex::display() {
    cout << real << " + " << imag << "i" << endl;
}

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);
    Complex c3 = c1 + c2; // Using overloaded + operator
    c3.display(); // Output: 5 + 7i
    return 0;
}