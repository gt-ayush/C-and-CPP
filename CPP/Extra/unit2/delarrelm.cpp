#include <iostream>
using namespace std;
//deleting an element from an array
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int index; cin>>index;
    for(int i=index-1;i<9;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}