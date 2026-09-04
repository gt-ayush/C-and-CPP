#include <iostream>
using namespace std;

class abc {
    public:
    int n,m;
    void sum(){
        cout<<"Sum: "<<n+m<<endl;
    }
};

int main(void){
    abc a,b;
    a.n=10;
    a.m=100;
    b.n=90;
    b.m=80;
    cout<<"a: "<<endl<<a.n<<endl<<a.m<<endl;
    cout<<"b: "<<endl<<b.n<<endl<<b.m<<endl;
    a.sum();
    b.sum();
}