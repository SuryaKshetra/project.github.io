#include <iostream>
using namespace std;

void heapify(int H[], int n, int k) {
    int v = H[k], j = 2 * k;
    while (j <= n) {
        if (j < n && H[j] < H[j + 1]) j++;
        if (v >= H[j]) break;
        H[k] = H[j];
        k = j;
        j = 2 * k;
    }
    H[k] = v;
}

void heapBottomUp(int H[], int n) {
    for (int i = n / 2; i >= 1; i--) {
        heapify(H, n, i);
    }
}

void heapSort(int H[], int n) {
    heapBottomUp(H, n);
    for (int i = n; i > 1; i--) {
        swap(H[1], H[i]);
        heapify(H, i - 1, 1);
    }
}

int main() {
    int n;
    cin >> n;
    int H[n + 1]; // H[1..n], heap is 1-indexed
    for (int i = 1; i <= n; i++) cin >> H[i];
    heapSort(H, n);
    for (int i = 1; i <= n; i++) cout << H[i] << " ";
    return 0;
}
