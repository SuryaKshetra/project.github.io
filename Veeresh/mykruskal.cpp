#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct edge {
    int u, v, weight;
};

// Comparator function to sort edges by weight
bool compare(edge a, edge b) {
    return a.weight < b.weight;
}

class kruskal {
public:
    int find(int arr[50], int u, int v);
    void union_(int arr[50], int u, int v, int n);
    void operation(vector<edge>& edges, int n);
};

int kruskal::find(int arr[50], int u, int v) {
    if (arr[u] == arr[v]) {
        return 1;
    } else {
        return 0;
    }
}

void kruskal::union_(int arr[50], int u, int v, int n) {
    int temp = arr[u];
    for (int i = 0; i < n; i++) {
        if (arr[i] == temp) {
            arr[i] = arr[v];
        }
    }
}

void kruskal::operation(vector<edge>& edges, int n) {
    // Array to represent the sets of each node
    int arr[50];
    for (int i = 0; i < n; i++) {
        arr[i] = i; // Each node is its own parent initially
    }

    // Sort edges by weight
    sort(edges.begin(), edges.end(), compare);

    vector<edge> mst; // To store edges in the Minimum Spanning Tree
    int totalWeight = 0;

    for (auto& e : edges) {
        if (!find(arr, e.u, e.v)) { // If u and v are not in the same set
            mst.push_back(e);
            totalWeight += e.weight;
            union_(arr, e.u, e.v, n);
        }
    }

    // Display the MST and total weight
    cout << "Edges in the Minimum Spanning Tree:" << endl;
    for (auto& e : mst) {
        cout << "(" << e.u << ", " << e.v << ") - Weight: " << e.weight << endl;
    }
    cout << "Total Weight of MST: " << totalWeight << endl;
}

int main() {
    kruskal o;

    int n, e;
    cout << "Enter the number of vertices: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> e;

    vector<edge> edges(e);
    cout << "Enter the edges (u v weight):" << endl;
    for (int i = 0; i < e; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    }

    o.operation(edges, n);

    return 0;
}