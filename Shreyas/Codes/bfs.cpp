#include <iostream>
using namespace std;

void bfs(int m[10][10], int v, int source) {
    int queue[20];
    int front = 0, rear = 0, u, i;
    int visited[10];

    for (i = 0; i < v; i++)
        visited[i] = 0;

    queue[rear] = source;
    visited[source] = 1;

    cout << "The BFS Traversal is... \n";

    while (front <= rear) {
        u = queue[front];
        cout << u << "\t";
        front++;

        for (i = 0; i < v; i++) {
            if (m[u][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                rear++;
                queue[rear] = i;
            }
        }
    }
}

int main() {
    int v = 5;
    int m[10][10] = {{0,1,1,0,0}, {1,0,0,1,1},
        {1,0,0,0,1}, {0,1,0,0,0}, {0,1,1,0,0}};

    int source;
    cout << "Enter the source vertex: ";
    cin >> source;

    bfs(m, v, source);

    return 0;
}
