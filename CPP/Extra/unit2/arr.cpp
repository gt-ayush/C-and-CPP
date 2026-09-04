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
    return 0;
}