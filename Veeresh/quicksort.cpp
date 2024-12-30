#include <iostream>
using namespace std;

void quickSort(int A[], int l, int r) {
    if (l < r) {
        int s = partition(A, l, r);
        quickSort(A, l, s - 1);
        quickSort(A, s + 1, r);
    }
}

int partition(int A[], int l, int r) {
    int p = A[l], i = l, j = r + 1;
    do {
        do i++; while (A[i] < p);
        do j--; while (A[j] > p);
        if (i < j) swap(A[i], A[j]);
    } while (i < j);
    swap(A[l], A[j]);
    return j;
}

int main() {
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) cin >> A[i];
    quickSort(A, 0, n - 1);
    for (int i = 0; i < n; i++) cout << A[i] << " ";
    return 0;
}
