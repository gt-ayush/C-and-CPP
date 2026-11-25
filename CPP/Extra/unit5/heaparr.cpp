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

void insert(int arr[], int& n, int val) {
    n++;
    arr[n - 1] = val;
    int i = n - 1;

    while (i != 0 && arr[(i - 1) / 2] < arr[i]) {
        swap(arr[i], arr[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void sortHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void heapsort(int arr[], int n) {
    sortHeap(arr, n);
}

void deleteRoot(int arr[], int& n) {
    if (n <= 0) return;
    arr[0] = arr[n - 1];
    n--;
    heapify(arr, n, 0);
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

    // Sort the heap
    heapsort(arr, n);

    // Print the sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

//time complexity of heapify is O(log n) and building the heap takes O(n) time.
//space complexity is O(1) as we are not using any extra space.
//cons - fixed size, less flexible for dynamic operations
//pros - simpler implementation, better cache locality