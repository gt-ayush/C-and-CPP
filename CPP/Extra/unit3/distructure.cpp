#include <iostream>
using namespace std;
int i=0;
class p{
    public:
    ~p(){
        i=10;
    }
};

int poo(){
    i=3;
    p a;
    return i;
}

int main () {
    cout<<poo()<<endl;
    cout<<i<<endl;
}