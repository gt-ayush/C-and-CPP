#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int ele;
    cin >> ele;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == ele) {
            cout << "found at index: " << i << " ";
            return 0;
        }
    }
    cout << "not found" << endl;
    return 0;
}