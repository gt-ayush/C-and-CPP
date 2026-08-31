#include <iostream>
using namespace std;
class B;
class A{
    int a,b;
    friend class B;
    public:
    void getdata(int m, int n){
        a=m;
        b=n;
    }
};

class B{
    int x=9,y=90;
    public:
    void setdata(int m,int n,A &o){
        o.a=m;
        o.b=n;
    }
    void showdata(A &o){
        cout<<"a="<<o.a<<endl;
        cout<<"b="<<o.b<<endl;
    }
    //function without the class object as a parameter
    void area(){
        cout<<"Area of rectangle is: "<<x*y<<endl;
    }
    
};

int main()
{
    A a;
    B b;
    a.getdata(10, 20);
    b.showdata(a);
    b.area();
    return 0;
}

// &o is used to pass the object of class A by reference to the member functions of class B. This allows the functions in class B to access and modify the private members of class A directly, since class B is declared as a friend of class A.