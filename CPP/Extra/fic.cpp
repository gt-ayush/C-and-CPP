#include <iostream>
using namespace std;

long long int fic(int n){
    if(n<=1)
        return n;
    return n*fic(n-1);
}

int main() {
    int n;
    cout<<"Enter the number of terms : ";
    cin>>n;
    cout<<"Factorial: ";
    cout<<fic(n)<<" ";
}