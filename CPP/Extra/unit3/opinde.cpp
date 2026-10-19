//overload post increment, decrement
#include <iostream>
using namespace std;

class Counter {
    private:
        int count;
    public:
        Counter(int c = 0) : count(c) {}
        Counter operator++(); // Prefix increment
        Counter operator++(int); // Postfix increment
        Counter operator--(); // Prefix decrement
        Counter operator--(int); // Postfix decrement
        void display();
};

Counter Counter::operator++() {
    ++count; // Prefix increment
    return *this;
}

Counter Counter::operator++(int) {
    Counter temp(*this);
    ++count; // Postfix increment
    return temp;
}

Counter Counter::operator--() {
    --count; // Prefix decrement
    return *this;
}

Counter Counter::operator--(int) {
    Counter temp(*this);
    --count; // Postfix decrement
    return temp;
}

void Counter::display() {
    cout << "Count: " << count << endl;
}

int main() {
    Counter c(5);
    c.display(); // Output: Count: 5

    ++c; // Prefix increment
    c.display(); // Output: Count: 6

    c++; // Postfix increment
    c.display(); // Output: Count: 7

    --c; // Prefix decrement
    c.display(); // Output: Count: 6

    c--; // Postfix decrement
    c.display(); // Output: Count: 5

    return 0;
}