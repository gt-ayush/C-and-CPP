#include <iostream>
using namespace std;
//testing friend keyword
//use multiple friend functions to single class
//one common friend function for two  class
//any member function of one class can be friend of another class
class fri2; //forward declaration of class fri2
class fri {
    friend void display(fri f);
    friend void update(fri &f, int x);
    friend void print(const fri &f);
    int a;
    public:
        fri(int x){
            a = x;
        }
        int getA() const;
};
//different value of a and b in different class
class fri2 {
    friend void display(fri2 f2);
    friend void update(fri2 &f2, int x);
    friend void print(const fri2 &f2);
    int b;
    public:
        fri2(int y){
            b = y;
        }
        int getB() const;
        
};
int fri::getA() const {
    return a;
}
int fri2::getB() const {
    return b;
}   
void display(fri f){
    cout<<"The value of a is: "<<f.a<<endl;
}

void display(fri2 f2){
    cout<<"The value of b is: "<<f2.b<<endl;
}

void update(fri &f, int x){
    f.a = x;
}

void print(const fri &f){
    cout<<"The value of a is: "<<f.a<<endl;
}

int main(){
    fri f1(10);
    fri2 f2(30);
    
    display(f1);
    display(f2);        
    update(f1, 20);
    display(f1);
    print(f1);
    return 0;
}

//what is the use when we use friend function in class?
//friend function is used to access private and protected members of a class from outside the class. It allows functions that are not members of the class to access its private data. This can be useful for operator overloading, implementing certain algorithms, or when you want to allow specific functions to have special access to the class's internals without making those members public.