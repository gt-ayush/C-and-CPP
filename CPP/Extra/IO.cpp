#include <iostream>
using namespace std;
//no paraneter with return value
int greatest(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
    else
        return c;
}
int main(){
    int a=greatest();
    cout<<a;
}