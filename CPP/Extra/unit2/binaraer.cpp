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
        int min = low + (high - low) / 2;
        if (arr[min] == ele) {
            cout<<"found at index: " << min << endl;
            return 0;
        }
        else if (arr[min] < ele) 
        low = min+1;
        else
        high =min-1;
    }
    cout << "not found" << endl;
    return 0;
}