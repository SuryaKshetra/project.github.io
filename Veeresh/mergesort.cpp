#include <iostream>
using namespace std;

void merge(int B[], int p, int C[], int q, int A[]) {
    int i = 0, j = 0, k = 0;
    while (i < p && j < q) {
        if (B[i] <= C[j]) A[k++] = B[i++];
        else A[k++] = C[j++];
    }
    while (i < p) A[k++] = B[i++];
    while (j < q) A[k++] = C[j++];
}

void mergeSort(int A[], int n) {
    if (n > 1) {
        int mid = n / 2;
        int B[mid], C[n - mid];
        for (int i = 0; i < mid; i++) B[i] = A[i];
        for (int i = mid; i < n; i++) C[i - mid] = A[i];
        mergeSort(B, mid);
        mergeSort(C, n - mid);
        merge(B, mid, C, n - mid, A);
    }
}

int main() {
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) cin >> A[i];
    mergeSort(A, n);
    for (int i = 0; i < n; i++) cout << A[i] << " ";
    return 0;
}
