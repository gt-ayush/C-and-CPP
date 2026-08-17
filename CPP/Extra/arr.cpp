#include <iostream>
using namespace std;

int main(){
    
    int arr[10];
    for(int i=0;i<5;i++){
        cout<<"Enter the Element : ";
        cin>>arr[i];
    }
    cout<<"ENter Element to be inserted : ";
    int a;
    cin>>a;
    arr[5]=a;
    for (int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}