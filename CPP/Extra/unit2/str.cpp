#include <iostream>
#include <string>
using namespace std;

int main(){
    string a = "Hello";
    string b;
    b= "bye";
    string c("jay");
    cout<<a<<b<<c<<"\n";
    cout<<a+b<<"\n";
    a.swap(b);
    cout<<a<<" "<< b;
    a.append(b);
    cout<<a<<"\n";
    cout<<a.find("e")<<"\n";

}