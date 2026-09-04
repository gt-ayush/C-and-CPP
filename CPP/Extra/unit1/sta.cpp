//static demo
#include <iostream>
using namespace std;

class Demo{
    
    static int count;
    public:

    int getcount(){
        return count;
    }
    int call(){
        count++;
        return count;
    }
};

int hello(){
    static int ct = 0;
    ct++;
    return ct;
}

int Demo::count = 0;

int main(){
    Demo d1,d2;
    cout<<"Count: "<<d1.getcount()<<endl;
    cout<<"Count: "<<d2.getcount()<<endl;
    cout<<"Count after call: "<<d1.call()<<endl;
    cout<<"Count after call: "<<d2.call()<<endl;
    cout<<"Count: "<<d1.getcount()<<endl;
    cout<<"Count: "<<d2.getcount()<<endl;

    cout <<"hello after call: "<<hello()<<endl;
    cout <<"hello after call: "<<hello()<<endl;
    cout <<"hello after call: "<<hello()<<endl;
}