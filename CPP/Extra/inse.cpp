#include <iostream>
#include <vector>
using namespace std;

int insersort(vector<int> &a,int n){
    for(int i=0;i<n;i++){
        int g=a[i];
        int j=i-1;
        while(j>=0 && a[j]>g){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=g; 
    }

}


int main(){

    int n=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insersort(a,n);

}