#include <iostream>
using namespace std;

int main(){
    //---
    int arr[10];
    for(int i=0;i<5;i++){
        cout<<"Enter the Element : ";
        cin>>arr[i];
    }
    //---
    cout<<"ENter Element to be inserted : ";
    int a;
    cin>>a;
    //---
    int index;
    cout<<"Enter the index : ";
    cin>>index;
    //---
    for (int i=5;i>index;i--) {arr[i]=arr[i-1];}
    arr[index]=a;
    //---
    for (int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    //--
}