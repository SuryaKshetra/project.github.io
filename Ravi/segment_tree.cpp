### Segment Tree for Land Use
```cpp
#include <iostream>
#include <vector>
using namespace std;

class SegmentTree {
private:
    vector<int> tree, lazy;
    int n;
    
    void propagate(int node, int start, int end) {
        if (lazy[node] != 0) {
            tree[node] = (end - start + 1) - tree[node];
            if (start != end) {
                lazy[2*node+1] ^= lazy[node];
                lazy[2*node+2] ^= lazy[node]; 
            }
            lazy[node] = 0;
        }
    }
    
    void build(int node, int start, int end) {
        if (start == end) {
            tree[node] = 0; 
        } else {
            int mid = (start + end) / 2;
            build(2*node+1, start, mid);
            build(2*node+2, mid+1, end);
            tree[node] = tree[2*node+1] + tree[2*node+2];
        }
    }

    void update(int node, int start, int end, int l, int r) {
        propagate(node, start, end); 
        
        if (start > r || end < l) return; 
        
        if (start >= l && end <= r) {
            tree[node] = (end - start + 1) - tree[node]; 
            if (start != end) {
                lazy[2*node+1] ^= 1;
                lazy[2*node+2] ^= 1;
            }
            return;
        }
        
        int mid = (start + end) / 2;
        update(2*node+1, start, mid, l, r);
        update(2*node+2, mid+1, end, l, r);
        tree[node] = tree[2*node+1] + tree[2*node+2];
    }

    int query(int node, int start, int end, int l, int r) {
        propagate(node, start, end);
        
        if (start > r || end < l) return 0; 
        if (start >= l && end <= r) return tree[node]; 
        
        int mid = (start + end) / 2;
        int leftQuery = query(2*node+1, start, mid, l, r);
        int rightQuery = query(2*node+2, mid+1, end, l, r);
        return leftQuery + rightQuery;
    }

public:
    SegmentTree(int size) {
        n = size;
        tree.resize(4 * n);
        lazy.resize(4 * n, 0);
        build(0, 0, n-1);
    }

    void update(int l, int r) {
        update(0, 0, n-1, l, r);
    }

    int query(int l, int r) {
        return query(0, 0, n-1, l, r);
    }
};

int main() {
    SegmentTree segTree(10); 
    
    cout << "Unused land in range 2-5: " << segTree.query(2, 5) << endl;

    segTree.update(3, 6);
    cout << "Unused land after update: " << segTree.query(2, 5) << endl;

    return 0;
}
