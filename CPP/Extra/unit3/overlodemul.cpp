#include <iostream>
using namespace std;
//overlode multiply having operator member function


class Complex {
    private:
        double real;
        double imag;
    public:
        Complex(double r = 0, double i = 0);
        Complex operator*(const Complex& other);
        void display();
};

Complex::Complex(double r, double i) : real(r), imag(i) {}

Complex Complex::operator*(const Complex& other) {
    return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
}

void Complex::display() {
    cout << real << " * " << imag << "i" << endl;
}

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);  
    Complex c3 = c1 * c2; // Using overloaded * operator
    c3.display(); // Output: -7.5 * 18.5i
    return 0;
}