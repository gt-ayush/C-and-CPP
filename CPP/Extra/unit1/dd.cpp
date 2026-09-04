#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the number of rows and columns : ";
    cin>>n>>m;
    int arr[n] [m];
    int i=0,j=0;
    while(i<=n){ 
        cin>>arr[i][j];
        if(j<=m)
        {j++;}
        if(j>m)
        {j=0;i++;}

    }
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}