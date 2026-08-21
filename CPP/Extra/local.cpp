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