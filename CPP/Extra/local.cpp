#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;

    int y =0 ;

    for (int y=0;y< 5; y++)
    {
        cout << "y: " << y << endl;
    }
   { {
        int y=20;
        cout << "y inside block: " << y << endl;
    }
int y=90;
cout<< "y outside block: " << y << endl;
}
cout << "y outside block: " << y << endl;
    return 0;
}

//in which language dose createing a variable inside a block is called block scope and the variable is only accessible within that block. In this code, the variable 'y' is declared multiple times in different scopes, demonstrating how variable shadowing works in C++. The outer 'y' is initialized to 0, while the inner 'y' inside the for loop and the nested block have their own separate instances.
//in which language it is not allowe : Python  , java, and JavaScript do not allow variable shadowing in the same way as C++. In Python, for example, variables declared in an inner scope can access variables from an outer scope, but you cannot declare a new variable with the same name in the inner scope. In Java, while you can have local variables with the same name in different methods or blocks, it is generally discouraged and can lead to confusion. In JavaScript, variable shadowing is allowed but can lead to unexpected behavior due to its function-level scoping and hoisting.