#include <iostream>
using namespace std;
//pass by reference in array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printArray(arr, 10);
    cout<<&arr<<endl;
    return 0;
}