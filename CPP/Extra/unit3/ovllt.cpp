#include <iostream>
using namespace std;

//overlode less than operator having operator friend function

class Complex {
    private:
        double real;
        double imag;
    public:
        Complex(double r = 0, double i = 0);
        bool operator<(const Complex& other);
        void display();
        friend bool operator<(const Complex& c1, const Complex& c2);
};

Complex::Complex(double r, double i) : real(r), imag(i) {}

bool Complex::operator<(const Complex& other) {
    return (real * real + imag * imag) < (other.real * other.real + other.imag * other.imag);
}

bool operator<(const Complex& c1, const Complex& c2) {
    return (c1.real * c1.real + c1.imag * c1.imag) < (c2.real * c2.real + c2.imag * c2.imag);   
}

void Complex::display() {
    cout << real << " + " << imag << "i" << endl;
}

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);  
    bool isLess = c1 < c2; // Using overloaded < operator
    cout << "Is c1 less than c2? " << isLess << endl;
    return 0;
}