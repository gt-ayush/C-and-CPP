#include <iostream>
using namespace std;

int i=0;

class p{
    int g=0;
    public:

    p():g(8){
            cout<<g<<endl;
    }

    ~p(){
        i=10;
    }

};

int poo(){

    p a;
    return i;
}

int main () {
    cout<<poo()<<endl;
    cout<<i<<endl;
}