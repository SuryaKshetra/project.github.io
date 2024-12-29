#include <iostream>
using namespace std;

const int INF = 1e9;
const int MAX = 100;

int findMinKey(int key[], bool mstSet[], int V) {
    int minKey = INF, minIndex;

    for (int v = 0; v < V; v++) {
        if (!mstSet[v] && key[v] < minKey) {
            minKey = key[v];
            minIndex = v;
        }
    }
    return minIndex;
}

void primMST(int graph[MAX][MAX], int V) {
    int parent[MAX];
    int key[MAX];
    bool mstSet[MAX] = {false};

    for (int i = 0; i < V; i++) key[i] = INF;
    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++) {
        int u = findMinKey(key, mstSet, V);
        mstSet[u] = true;

        for (int v = 0; v < V; v++) {
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    cout << "Edges in the MST:\n";
    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << " : " << graph[i][parent[i]] << endl;
}

int main() {
    int graph[MAX][MAX] = {
        {0, 2, INF, 6, INF},
        {2, 0, 3, 8, 5},
        {INF, 3, 0, INF, 7},
        {6, 8, INF, 0, 9},
        {INF, 5, 7, 9, 0}
    };

    int V = 5;
    primMST(graph, V);

    return 0;
}
