#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int element) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == element) {
            return mid;
        } else if (arr[mid] < element) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    return -1; 
}
int linear_search(int arr[], int n, int element) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter the elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int element;
    cout << "Enter the element to search: ";
    cin >> element;

   
    int binary_index = binary_search(arr, n, element);
    if (binary_index == -1) {
        cout << "Element not found using binary search." << endl;
    } else {
        cout << "Element found at index (binary search): " << binary_index << endl;
    }

   
    int linear_index = linear_search(arr, n, element);
    if (linear_index == -1) {
        cout << "Element not found using linear search." << endl;
    } else {
        cout << "Element found at index (linear search): " << linear_index << endl;
    }

    return 0;
}   