#include <iostream>
using namespace std;

class pr{
    int p=0;
    public:
    int *pp=&p;
    void set(int value){
        *pp=value;
    }
    int get(){
        return *pp;
    }

};

int main() {
    pr obj;
    obj.set(10);
    cout << obj.get() << endl;
    return 0;
}