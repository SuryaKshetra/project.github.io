#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& B, vector<int>& C, vector<int>& A) {
    int i = 0, j = 0, k = 0;
    int p = B.size();
    int q = C.size();

    while (i < p && j < q) {
        if (B[i] <= C[j]) {
            A[k] = B[i];
            i++;
        } else {
            A[k] = C[j];
            j++;
        }
        k++;
    }

    while (i < p) {
        A[k] = B[i];
        i++;
        k++;
    }

    while (j < q) {
        A[k] = C[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& A) {
    int n = A.size();
    if (n > 1) {
        int mid = n / 2;

        vector<int> B(A.begin(), A.begin() + mid);
        vector<int> C(A.begin() + mid, A.end());

        mergeSort(B);
        mergeSort(C);

        merge(B, C, A);
    }
}

int main() {
    vector<int> A = {38, 27, 43, 3, 9, 82, 10};

    cout << "Original array: ";
    for (int x : A) {
        cout << x << " ";
    }
    cout << endl;

    mergeSort(A);

    cout << "Sorted array: ";
    for (int x : A) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
