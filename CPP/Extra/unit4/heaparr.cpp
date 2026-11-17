//maxheep using array
#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

int main() {
    int arr[] = {10, 5, 20, 1, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Build heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Print the heap
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

//time complexity of heapify is O(log n) and building the heap takes O(n) time.
//space complexity is O(1) as we are not using any extra space.
//cons - fixed size, less flexible for dynamic operations
//pros - simpler implementation, better cache locality