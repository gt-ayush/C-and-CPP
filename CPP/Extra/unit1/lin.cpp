#include <iostream>
using namespace std;
//learnear search

int main(){
    int arr[10];
    for(int i=0;i<5;i++){
        cout<<"Enter the Element : ";
        cin>>arr[i];
    }
    int element;
    cin>>element;
    int index = -1;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == element) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "Element not found " << endl;
    } else {
       cout << "Element found at index: " << index << endl;
    }
}