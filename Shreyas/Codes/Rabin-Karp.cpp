#include <iostream>
#include <string>
using namespace std;

const int d = 256; // Total number of characters in the input alphabet
const int q = 101; // A prime number for hashing

void rabinKarp(string text, string pattern) {
    int n = text.size();
    int m = pattern.size();
    int h = 1; // Hash value of the pattern
    int p = 0; // Pattern hash
    int t = 0; // Text hash

    for (int i = 0; i < m - 1; i++)
        h = (h * d) % q;

    for (int i = 0; i < m; i++) {
        p = (d * p + pattern[i]) % q;
        t = (d * t + text[i]) % q;
    }

    for (int i = 0; i <= n - m; i++) {
        if (p == t) {
            bool match = true;
            for (int j = 0; j < m; j++) {
                if (text[i + j] != pattern[j]) {
                    match = false;
                    break;
                }
            }
            if (match)
                cout << "Pattern found at index " << i << endl;
        }

        if (i < n - m) {
            t = (d * (t - text[i] * h) + text[i + m]) % q;
            if (t < 0)
                t += q;
        }
    }
}

int main() {
    string text = "busstopA-busstopB-busstopA-busstopC";
    string pattern = "busstopA";
    
    cout << "Searching for pattern \"" << pattern << "\" in the schedule:\n";
    rabinKarp(text, pattern);

    return 0;
}
