#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout<<"Enter the length of first the arr:";
    cin>>n;
    
    int arr1[n],arr2[m];

    for(int i = 0 ; i <n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the length of second arr:";
    cin>>m;
    for(int i = 0 ; i <m;i++){
        cin>>arr2[i];
    } 

    int arr3[n+m];

    int min = (n < m) ? n : m;
    for(int i=0,j=0;i,j<min;){
        if(arr1[i] < arr2[j]){
            arr3[i+j] = arr1[i];
            i++;
        } else {
            arr3[i+j] = arr2[j];
            j++;
        }
    }
}