#include <iostream>
using namespace std;

class g{
        public:
    g(){
        cout<<"Constructor of g"<<endl;
    }
    ~g(){
        cout<<"Destructor of g"<<endl;
    }
};

class A{
    public:
    A(){
        cout<<"Constructor of A"<<endl;
    }
    ~A(){
        cout<<"Destructor of A"<<endl;
    }
};

class B: public A,public g{
    public:
    B(){
        cout<<"Constructor of B"<<endl;
    }
    ~B(){
        cout<<"Destructor of B"<<endl;
    }
};

int main(){
    B b;
    return 0;
}