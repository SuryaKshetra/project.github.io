#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);

        int pi = i + 1;
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int population[] = {12000, 45000, 32000, 60000, 23000};
    int n = sizeof(population) / sizeof(population[0]);

    quickSort(population, 0, n - 1);

    cout << "Sorted population data:\n";
    for (int i = 0; i < n; i++)
        cout << population[i] << " ";
    cout << endl;

    return 0;
}
