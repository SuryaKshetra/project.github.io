#include <iostream>
using namespace std;

int binarySearch(int services[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (services[mid] == target)
            return mid;
        else if (services[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int emergencyServices[] = {1001, 1003, 1005, 1010, 1015};
    int n = sizeof(emergencyServices) / sizeof(emergencyServices[0]);
    int target = 1005;

    int result = binarySearch(emergencyServices, n, target);
    if (result != -1)
        cout << "Service found at index: " << result << endl;
    else
        cout << "Service not found." << endl;

    return 0;
}
