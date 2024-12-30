#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int V = 9;

void bfs(vector<vector<int>>& adj, int start, int target) {
    vector<bool> v(V, false);  
    vector<int> dist(V, -1), parent(V, -1);
    queue<int> q;

    q.push(start);
    v[start] = true;
    dist[start] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        if (node == target) {
            cout << "Distance: " << dist[node] << "\nPath: ";
            for (int vNode = target; vNode != -1; vNode = parent[vNode])
                cout << vNode << " ";
            cout << endl;
            return;
        }

        for (int n : adj[node]) {  
            if (!v[n]) {
                v[n] = true;
                dist[n] = dist[node] + 1;
                parent[n] = node;
                q.push(n);
            }
        }
    }

    cout << "Not reachable" << endl;
}

int main() {
    vector<vector<int>> adj(V);
    adj[0] = {1, 2}; adj[1] = {0, 3}; adj[2] = {0, 4};
    adj[3] = {1}; adj[4] = {2};
    adj[5] = {6}; adj[6] = {7}; adj[7] = {8}; adj[8] = {7};

    bfs(adj, 0, 3);
    return 0;
}
