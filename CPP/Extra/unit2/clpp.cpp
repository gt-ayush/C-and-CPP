#include <iostream>
using namespace std;

class pr{
    int p=0;
    float f=0.0;
    double d=0.0;
    bool b=false;
    public:
    int *pp=&p;
    float *ff=&f;
    double *dd=&d;
    bool *bb=&b;

    void set(int value, float fvalue=0.0, double dvalue=0.0, bool bvalue=false){
        *pp=value;
        *ff=fvalue;
        *dd=dvalue;
        *bb=bvalue;
    }
    int get(){
        return *pp;
    }
    void display(){
        cout<<*pp<<endl;
        cout<<sizeof(pp)<<endl;
        cout<<*ff<<endl;
        cout<<sizeof(ff)<<endl;
        cout<<*dd<<endl;
        cout<<sizeof(dd)<<endl;
        cout<<*bb<<endl;
        cout<<sizeof(bb)<<endl;
    }

};

int main() {
    pr obj;
    obj.set(10, 3.14, 2.71828, true);
    cout << obj.get() << endl;
    obj.display();

    return 0;
}