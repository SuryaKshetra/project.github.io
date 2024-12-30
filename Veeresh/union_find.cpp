#include <iostream>
#include <vector>

using namespace std;

class UnionFind {
private:
    vector<int> parent;

public:
    UnionFind(int n) {
        parent.resize(n);
        for (int i = 0; i < n; i++) parent[i] = i;
    }

    int find(int x) {
        return (parent[x] == x) ? x : parent[x] = find(parent[x]);
    }

    void unionSets(int x, int y) {
        parent[find(x)] = find(y);
    }

    bool connected(int x, int y) {
        return find(x) == find(y);
    }
};

int main() {
    UnionFind uf(5);
    uf.unionSets(0, 1);
    uf.unionSets(1, 2);
    uf.unionSets(3, 4);

    cout << (uf.connected(0, 2) ? "Yes" : "No") << "\n";
    cout << (uf.connected(0, 3) ? "Yes" : "No") << "\n";
    cout << (uf.connected(3, 4) ? "Yes" : "No") << "\n";

    return 0;
}
