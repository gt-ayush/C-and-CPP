#include <iostream>
using namespace std;
//function overloading

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

    float z;
    float v, g;
    cout<<"Enter base, height, and third side of triangle: ";
    cin>>z>>v>>g;
    area(z, v, g);

    return 0;
}

int area(int a){
    return a * a;
}
int area(int x, int y){
    return x * y;
}
double area(double c1, double c2){
    return 3.14 * c1 * c2;
}
void area(float a, float b, float c){
    cout<<"Area of triangle: "<<(a*b)/2<<endl;
}