#include <iostream>
using namespace std;

class Stack {
    int top;
    int capacity;
    int* stack; // Dynamically allocated array that stores the stack elements.

public:
    Stack(int size) {
        capacity = size;
        top = -1;
        stack = new int[capacity]; // Allocate space for the requested number of elements.
    }
            
    void push(int value) {
        if (top < capacity - 1) {
            top++;
            stack[top] = value;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    int pop() {
        if (top >= 0) {
            top--;
            return stack[top + 1];
        } else {
            cout << "Stack Underflow" << endl;
            return -1; // Return an invalid value to indicate an error
        }
    }

    void peek() {
        if (top >= 0) {
            cout << "Top element: " << stack[top] << endl;
        } else {
            cout << "Stack is empty" << endl;
        }
    }

    void display() {
        if (top >= 0) {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
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
    int poppedValue = s.pop();
    cout << "Popped value: " << poppedValue << endl;
    s.display();
    s.peek();
    // Create a separate stack with a same capacity. and add thst element to the next stack and display the elements of the next stack.
    Stack s2(n);
    //using pop only
    while (true) {
        int value = s.pop();
        if (value == -1) {
            break; // Stop if stack is empty
        }
        s2.push(value);
    }
    s2.display();

}