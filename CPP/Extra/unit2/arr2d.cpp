#include <iostream>
using namespace std;

int main () {
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
            sum+=arr[i][j];
        }
        cout<<endl;
    }
    cout<<"Sum: "<<sum<<endl;
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    // transpose of a 2D array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    //a*a
    int arr1[3][3]={};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr1[i][j]=arr[i][j]*arr[j][i];
        }
        cout<<endl;
    }
    cout<<"------\n";
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr1[j][i]<<" ";
        }
        cout<<endl;
    }
}