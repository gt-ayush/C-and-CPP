#include <iostream>
using namespace std;
int sum(int n){
    if(n<=1)
        return n;
    return n+sum(n-1);
}
int main() {
    int n;
    cout<<"Enter the number of terms : ";
    cin>>n;
    cout<<"Sum: "<<sum(n)<<endl;
}