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
    if(index<10){
    for (int i=index;i<5;i++){
        arr[i-1]=arr[i];
    }}
    else{
        cout<<"Index is out of range"<<endl;
    }
    //---
    for (int i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }
    //--
}