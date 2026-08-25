#include <iostream>
using namespace std;
//function overloading
int area(int a){
    return a * a;
}
int area(int x, int y){
    return x * y;
}
double area(double c1, double c2){
    return 3.14 * c1 * c2;
}
int main() {
    int a;
    cout<<"Enter an integer: ";
    cin>>a;
    cout<<"Area of square: "<<area(a)<<endl;

    int x,y;
    cout<<"Enter two integers: ";
    cin>>x>>y;
    cout<<"Area of rectangle: "<<area(x,y)<<endl;

    double c1,c2;
    cout<<"Enter two doubles: ";
    cin>>c1>>c2;
    cout<<"Area of circle: "<<area(c1,c2)<<endl;

    return 0;
}