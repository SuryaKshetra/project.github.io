#include <iostream>
using namespace std;

// Function to implement brute force string match
int BruteForceStringMatch(const char* T, const char* P) {
    int n = 0, m = 0;

    // Calculate the length of text T
    while (T[n] != '\0') {
        n++;
    }

    // Calculate the length of pattern P
    while (P[m] != '\0') {
        m++;
    }

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && P[j] == T[i + j]) {
            j++;
        }
        if (j == m) {
            return i; // Found match, return starting index
        }
    }

    return -1; // No match found
}

int main() {
    char text[1000], pattern[1000];

    // Input text and pattern
    cout << "Enter the text: ";
    cin.getline(text, 1000);

    cout << "Enter the pattern: ";
    cin.getline(pattern, 1000);

    // Call the function and display the result
    int result = BruteForceStringMatch(text, pattern);

    if (result != -1) {
        cout << "Pattern found at index " << result << endl;
    } else {
        cout << "Pattern not found in the text." << endl;
    }

    return 0;
}
