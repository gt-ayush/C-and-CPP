#include <iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,6,7,8,9,10,0};
    int n;cin>>n;
    int index; cin>>index;
    for(int i=9;i>=0;i--){
        if(i!=index)
        swap(arr[i],arr[i+1]);
        else{
        arr[i]=n;
        break;
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}