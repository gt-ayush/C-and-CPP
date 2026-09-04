#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    cout << "Hello, World!" << endl;
    int a=10;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of a is: "<<setw(4)<<setfill('0')<<a<<endl;
    cout<<"The value of a is: "<<oct<<a<<endl;
    cout<<"The value of a is: "<<hex<<a<<endl;
    cout<<"The value of a is: "<<dec<<a<<endl;
    cout<<"The value of a is: "<<setbase(8)<<a<<endl;
    float b=10.538481;
    cout<<"The value of b is: "<<setprecision(2)<<b<<endl;
    cout<<"The value of b is: "<<fixed<<setprecision(2)<<b<<endl;
    double c=8.09432232345;
    char g='a';

    return 0;
}