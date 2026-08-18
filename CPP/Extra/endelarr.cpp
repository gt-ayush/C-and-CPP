#include <iostream>
using namespace std;

int main(){
    //---
    int arr[10];
    for(int i=0;i<5;i++){
        cout<<"Enter the Element : ";
        cin>>arr[i];
    }
    int index;
    cin>>index;
    //---
    for (int i=index;i<5;i++){
        arr[i-1]=arr[i];
    }
    //---
    for (int i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }
    //--
}