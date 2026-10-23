#include <iostream>
using namespace std;
//overlode devide having operator friend function


class Complex {
    private:
        double real;
        double imag;
    public:
        Complex(double r = 0, double i = 0);
        Complex operator/(const Complex& other);
        void display();
        friend Complex operator/(const Complex& c1, const Complex& c2);
};

Complex::Complex(double r, double i) : real(r), imag(i) {}

Complex Complex::operator/(const Complex& other) {
    double denominator = other.real * other.real + other.imag * other.imag;
    return Complex((real * other.real + imag * other.imag) / denominator, (imag * other.real - real * other.imag) / denominator);
}

Complex operator/(const Complex& c1, const Complex& c2) {
    double denominator = c2.real * c2.real + c2.imag * c2.imag;
    return Complex((c1.real * c2.real + c1.imag * c2.imag) / denominator, (c1.imag * c2.real - c1.real * c2.imag) / denominator);
}

void Complex::display() {
    cout << real << " + " << imag << "i" << endl;
}

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);  
    Complex c3 = c1 / c2; // Using overloaded / operator
    c3.display(); // Output: 0.5 + 0.5i
    return 0;
}