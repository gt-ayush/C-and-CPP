#include <iostream>
using namespace std;
//testing friend keyword
//use multiple friend functions to single class
//one common friend function for two  class

class fri {
    friend void display(fri f);
    friend void update(fri &f, int x);
    friend void print(const fri &f);
    int a;
    public:
        fri(int x){
            a = x;
        }
        
};

class fri2 {
    friend void display(fri f);
    friend void update(fri &f, int x);
    friend void print(const fri &f);
    int b;
    public:
        fri2(int y){
            b = y;
        }
        
};

void display(fri f){
    cout<<"The value of a is: "<<f.a<<endl;
}

void update(fri &f, int x){
    f.a = x;
}

void print(const fri &f){
    cout<<"The value of a is: "<<f.a<<endl;
}

int main(){
    fri f1(10);
    display(f1);
    update(f1, 20);
    display(f1);
    print(f1);
    return 0;
}