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
    a.getdata(10, 20);
    b.showdata(a);
    return 0;
}