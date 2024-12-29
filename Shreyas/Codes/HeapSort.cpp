#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;       // Initialize largest as root
    int left = 2 * i + 1;  // Left child
    int right = 2 * i + 2; // Right child

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    int roads[] = {5, 3, 8, 6, 2}; // Priority values (e.g., condition ratings)
    int n = sizeof(roads) / sizeof(roads[0]);

    cout << "Priorities before sorting: ";
    for (int i = 0; i < n; i++)
        cout << roads[i] << " ";
    cout << endl;

    heapSort(roads, n);

    cout << "Priorities after sorting: ";
    for (int i = 0; i < n; i++)
        cout << roads[i] << " ";
    cout << endl;

    return 0;
}
