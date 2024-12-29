#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int streets[] = {4, 2, 5, 1, 3}; // Priority ratings
    int n = sizeof(streets) / sizeof(streets[0]);

    cout << "Priorities before sorting: ";
    for (int i = 0; i < n; i++)
        cout << streets[i] << " ";
    cout << endl;

    bubbleSort(streets, n);

    cout << "Priorities after sorting: ";
    for (int i = 0; i < n; i++)
        cout << streets[i] << " ";
    cout << endl;

    return 0;
}
