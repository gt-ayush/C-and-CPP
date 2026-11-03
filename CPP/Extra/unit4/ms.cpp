#include <iostream>
using namespace std;

void merge(int arr[],int l,int mi,int h){
    int n= mi - l+1;
    int m = h - mi;
    int left[n],right[m];
    for(int i=0;i<n;i++)left[i]= arr[l+i];
    for(int i=0;i<m;i++)right[i]= arr[mi+1+i];
    int i,j,k;
    for(i=0,j=0,k=l;i<n && j<m;){
        if(left[i]<=right[j]){
            arr[k++] = left[i++];
        }else{
            arr[k++]=right[j++];
        }
    }

    while(i<n){
        arr[k++] = left[i++];
    }
    while(j<m){
        arr[k++] = right[j++];
    }
    
}

void mergesort(int arr[],int low,int high){

    if(low>=high){
       return;
    }
    else{
        int mid = low + (high-low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }

}

int main() {
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element ["<<i+1<<"]: ";
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}