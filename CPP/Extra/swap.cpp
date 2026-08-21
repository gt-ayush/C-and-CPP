//swap using function 

#include <iostream>
using namespace std;

void swap(int a, int b) //pass by value
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap function: a = " << a << ", b = " << b << endl;
}

int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "outside the swapping function: x = " << x << ", y = " << y << endl;
    return 0;
}