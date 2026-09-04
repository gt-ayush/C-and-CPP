#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[5];
    int sum = 0;
    cout << "Array elements are: ";
    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << endl;
    cout << "Sum of array elements is: " << sum << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }
    cout << "Array elements are: ";
    for (int i = 4; i >= 0; i--) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    //size of arrays
    cout << "Size of array is: " << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "Size of array is: " << sizeof(arr1) / sizeof(arr1[0]) << endl;
    cout << "Size of array is: " << sizeof(arr)  << endl;
    cout << "Size of array is: " << sizeof(arr1) << endl;

    //even elements
    cout << "Even elements are: ";
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    //odd elements
    cout << endl;
    cout << "Odd elements are: ";
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }

    //greatest element
    int greatest = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > greatest) {
            greatest = arr[i];
        }
    }
    cout << endl;
    cout << "Greatest element is: " << greatest << endl;
    return 0;
}