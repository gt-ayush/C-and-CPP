include <iostream>
using namespace std;
//memory leak example

class A{
    public:
    A(){
        cout<<"Constructor of A"<<endl;
    }
    int sum(int a, int b){
        return a + b;
    }

    ~A(){
        cout<<"Destructor of A"<<endl;
    }
};

class B: public A{
    public:
    B(){
        cout<<"Constructor of B"<<endl;
    }
    int reverse(int a){
        int rev = 0;
        while(a != 0){
            rev = rev * 10 + a % 10;
            a /= 10;
        }
        return rev;
    }

    ~B(){
        cout<<"Destructor of B"<<endl;
    }
};

int main(){
    A* a = new B();
    cout << a->sum(5, 10) << endl;
    cout << dynamic_cast<B*>(a)->reverse(123) << endl;
    
    delete a;
    return 0;
}
