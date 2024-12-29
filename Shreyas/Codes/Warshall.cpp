#include <iostream>
using namespace std;

const int INF = 99999;
const int MAX = 4;

void warshall(int graph[MAX][MAX]) {
    int reach[MAX][MAX];
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            reach[i][j] = graph[i][j];

    for (int k = 0; k < MAX; k++) {
        for (int i = 0; i < MAX; i++) {
            for (int j = 0; j < MAX; j++) {
                if (reach[i][k] && reach[k][j])
                    reach[i][j] = 1;
            }
        }
    }

    cout << "Transitive closure of the graph:\n";
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            cout << (reach[i][j] ? "1 " : "0 ");
        }
        cout << endl;
    }
}

int main() {
    int graph[MAX][MAX] = {
        {1, 1, 0, 0},
        {0, 1, 1, 0},
        {0, 0, 1, 1},
        {0, 0, 0, 1}
    };

    warshall(graph);
    return 0;
}
