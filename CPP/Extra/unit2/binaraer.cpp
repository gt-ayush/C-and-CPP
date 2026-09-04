#include <iostream>
using namespace std;

int main() {
    //sorted array
    int arr[5] = {1, 2, 3, 4, 5};

    //binary search
    int ele;
    cin >> ele;
    int low = 0;
    int high = 4;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == ele) {
            cout<<"found at index: " << mid << endl;
            return 0;
        }
        else if (arr[mid] < ele) 
        low = mid+1;
        else
        high =mid-1;
    }
    cout << "not found" << endl;
    return 0;
}