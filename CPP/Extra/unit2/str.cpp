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
    cout<<a<<" "<< b<<"\n";
    a.append(b);
    cout<<a<<"\n";
    cout<<a.find("e")<<"\n";
    cout<<a.rfind("e")<<"\n";
    cout<<a.find_first_of("e")<<"\n";
    cout<<a.find_last_of("e")<<"\n";
    cout<<a.compare(b)<<"\n";
    cout<<a.compare(2, 3, b,2, 3)<<"\n";
    cout<<a.compare(0, 3, b, 0, 3)<<"\n";
    cout<<a.substr(1, 4)<<"\n";
    cout<<a.size()<<"\n";
    cout<<a.length()<<"\n";
    cout<<a.capacity()<<"\n";
}