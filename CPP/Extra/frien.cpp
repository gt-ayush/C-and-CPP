#include <iostream>
using namespace std;
//testing friend keyword

class fri {

    int a;
    public:
        fri(int x){
            a = x;
        }
        friend void display(fri f);
};
void display(fri f){
    cout<<"The value of a is: "<<f.a<<endl;
}
int main(){
    fri f1(10);
    display(f1);
    return 0;
}