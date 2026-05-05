#include <iostream>
using namespace std;

int main () {
    int a,s=0; cin>>a;
    
    for (int i =1 ; i<(a/2)+1;i++){
        if(a%i == 0 ) s+=i;
    }
    if(s == a) cout << "Perfact no. "<< endl;
    else cout << "Not Perfact no. "<< endl;

    return 0;
}