//swap using function 

#include <iostream>
using namespace std;

void swap(int &a, int &b) //pass by reference
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    return 0;
}