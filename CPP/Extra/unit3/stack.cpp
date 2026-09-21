#include <iostream>
using namespace std;

class Stack {
    int top;
    int capacity;
    int* stack; //it is for dynamic memory allocation

public:
    Stack(int size) {
        capacity = size;
        top = -1;
        stack = new int[capacity];//it is for dynamic memory allocation and it is used to create an array of integers of size capacity
    }

    void push(int value) {
        if (top < capacity - 1) {
            top++;
            stack[top] = value;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack Underflow" << endl;
        }
    }

    void display() {
        if (top >= 0) {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << stack[i] << " ";
            }
            cout << endl;
        } else {
            cout << "Stack is empty" << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;
    Stack s(n);
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    //increase the size of the stack
    int newSize;
    cin >> newSize;
    Stack s2(newSize);
    s2.push(40);
    s2.push(50);
    s2.display();

}