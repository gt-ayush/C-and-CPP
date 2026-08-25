#include <iostream>
#include <vector>
using namespace std;

// Both original arrays are sorted in ascending order.
int main() {
    int n,m;
    cout << "Enter the length of first array: ";
    cin>>n;

    vector<int> arr1(n);

    for(int i = 0 ; i <n;i++){
        cin>>arr1[i];
    }

    cout << "Enter the length of second array: ";
    cin>>m;

    vector<int> arr2(m);
    for(int i = 0 ; i <m;i++){
        cin>>arr2[i];
    } 

    vector<int> arr3(n + m);
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m) {
        if(arr1[i] <= arr2[j]){
            arr3[k] = arr1[i];
            i++;
        } else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        arr3[k++] = arr1[i++];
    }

    while (j < m) {
        arr3[k++] = arr2[j++];
    }

    cout << "Merged array: ";
    for (int value : arr3) {
        cout << value << ' ';
    }
    cout << '\n';
}