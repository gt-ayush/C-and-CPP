#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[5];
    cout << "Array elements are: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Size of array is: " << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "Size of array is: " << sizeof(arr1) / sizeof(arr1[0]) << endl;
    cout << "Size of array is: " << sizeof(arr)  << endl;
    cout << "Size of array is: " << sizeof(arr1) << endl;
    return 0;
}