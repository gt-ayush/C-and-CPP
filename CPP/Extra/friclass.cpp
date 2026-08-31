#include <iostream>
using namespace std;
class B;
class A{
    int a,b;
    friend class B;
};

class B{
    int x,y;
    public:
    void setdata(int m,int n,A &o){
        o.a=m;
        o.b=n;
    }
    void showdata(A &o){
        cout<<"a="<<o.a<<endl;
        cout<<"b="<<o.b<<endl;
    }
};

int main()
{
    A a;
    B b;
    b.setdata(10, 20, a);
    b.showdata(a);
    cout<<"a="<<a.a<<endl; // This line will cause a compilation error because 'a' is private in class A and not accessible here.
    cout<<"b="<<a.b<<endl; // This line will also cause a compilation error for the same reason.
    return 0;
}