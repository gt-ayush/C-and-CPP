#include <iostream>
using namespace std;
//binary search with n elements

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter the elements in sorted order: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int element;
    cout << "Enter the element to search: ";
    cin >> element;
    int left = 0;
    int right = n - 1;
    int index = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == element) {
            index = mid;
            break;
        } else if (arr[mid] < element) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (index == -1) {
        cout << "Element not found " << endl;
    } else {
       cout << "Element found at index: " << index << endl;
    }
}