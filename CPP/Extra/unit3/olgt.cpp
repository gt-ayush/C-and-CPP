#include <iostream>
using namespace std;

//overlode greater than operator having operator member function

class Complex {
    private:
        double real;
        double imag;
    public:
        Complex(double r = 0, double i = 0);
        bool operator>(const Complex& other);
        void display();
};

Complex::Complex(double r, double i) : real(r), imag(i) {}

bool Complex::operator>(const Complex& other) {
    return (real * real + imag * imag) > (other.real * other.real + other.imag * other.imag);
}

void Complex::display() {
    cout << real << " + " << imag << "i" << endl;
}

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);  
    bool isGreater = c1 > c2; // Using overloaded > operator
    cout << "Is c1 greater than c2? " << isGreater << endl;
    return 0;
}