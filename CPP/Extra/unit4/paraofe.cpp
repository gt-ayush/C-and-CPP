#include <iostream>
using namespace std;

class A{
    int a;
    public:
    A(int a) : a(a){
        cout<<"Constructor of A :"<<a<<endl;
    }
    ~A(){
        cout<<"Destructor of A :"<<a<<endl;
    }
};

class B: public A{
    int g;
    public:
    B(int g): A(g), g(g){
        cout<<"Constructor of B :"<<g<<endl;
    }
    ~B(){
        cout<<"Destructor of B :"<<g<<endl;
    }
};

int main(){
    B b(5);
    return 0;
}