```cpp
#include <iostream>
#include <vector>

using namespace std;

// Fenwick Tree (Binary Indexed Tree) class
class FenwickTree {
public:
    FenwickTree(int n) {
        // Initialize Fenwick Tree with size n
        tree.resize(n + 1, 0);  // Index 0 is unused
        size = n;
    }

    // Update the tree with a value at index i
    void update(int i, int delta) {
        for (; i <= size; i += i & -i) {  // i & -i is the least significant bit of i
            tree[i] += delta;
        }
    }

    // Query the prefix sum from 1 to i
    int query(int i) {
        int sum = 0;
        for (; i > 0; i -= i & -i) {
            sum += tree[i];
        }
        return sum;
    }

    // Query the sum of values in the range [left, right]
    int rangeQuery(int left, int right) {
        return query(right) - query(left - 1);
    }

private:
    vector<int> tree;  // Fenwick Tree array
    int size;
};

int main() {
    int n = 10;  // Suppose we have 10 units of land
    FenwickTree fenwick(n);

    // Update the land availability: 1 indicates available land
    fenwick.update(2, 1);  // Land unit 2 is available
    fenwick.update(5, 1);  // Land unit 5 is available
    fenwick.update(7, 1);  // Land unit 7 is available

    // Query the available land in the range [1, 5]
    cout << "Available land in range [1, 5]: " << fenwick.rangeQuery(1, 5) << endl;

    // Query the available land in the range [6, 10]
    cout << "Available land in range [6, 10]: " << fenwick.rangeQuery(6, 10) << endl;

    // Update land unit 5 to be occupied (mark it as unavailable)
    fenwick.update(5, -1);

    // Query again after the update
    cout << "Available land in range [1, 5] after update: " << fenwick.rangeQuery(1, 5) << endl;

    return 0;
}
