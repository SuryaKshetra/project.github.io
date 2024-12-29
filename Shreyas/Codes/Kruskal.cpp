#include <iostream>
using namespace std;

// Structure to represent an edge in the graph
struct Edge {
    int src, dest, weight;
};

// Structure to represent a graph
struct Graph {
    int V, E; // Number of vertices and edges
    Edge* edges; // Array of edges
};

// Create a graph
Graph* createGraph(int V, int E) {
    Graph* graph = new Graph;
    graph->V = V;
    graph->E = E;
    graph->edges = new Edge[E];
    return graph;
}

// Function to find the parent of a node (with path compression)
int find(int parent[], int i) {
    if (parent[i] == i)
        return i;
    return parent[i] = find(parent, parent[i]);
}

// Function to perform union of two sets
void Union(int parent[], int rank[], int x, int y) {
    int xroot = find(parent, x);
    int yroot = find(parent, y);

    if (rank[xroot] < rank[yroot]) {
        parent[xroot] = yroot;
    } else if (rank[xroot] > rank[yroot]) {
        parent[yroot] = xroot;
    } else {
        parent[yroot] = xroot;
        rank[xroot]++;
    }
}

// Function to sort edges based on their weight (simple bubble sort for demonstration)
void sortEdges(Edge edges[], int E) {
    for (int i = 0; i < E - 1; i++) {
        for (int j = 0; j < E - i - 1; j++) {
            if (edges[j].weight > edges[j + 1].weight) {
                Edge temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }
}

// Function to implement Kruskal's algorithm
void KruskalMST(Graph* graph) {
    int V = graph->V;
    Edge* result = new Edge[V - 1]; // Array to store the resultant MST
    int e = 0; // Index for result[]
    int i = 0; // Index for sorted edges

    sortEdges(graph->edges, graph->E);

    int* parent = new int[V];
    int* rank = new int[V];

    for (int v = 0; v < V; v++) {
        parent[v] = v;
        rank[v] = 0;
    }

    while (e < V - 1 && i < graph->E) {
        Edge next_edge = graph->edges[i++];

        int x = find(parent, next_edge.src);
        int y = find(parent, next_edge.dest);

        if (x != y) {
            result[e++] = next_edge;
            Union(parent, rank, x, y);
        }
    }

    cout << "Edges in the MST:\n";
    for (i = 0; i < e; i++) {
        cout << result[i].src << " -- " << result[i].dest << " == " << result[i].weight << endl;
    }

    delete[] result;
    delete[] parent;
    delete[] rank;
}

int main() {
    int V, E;
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;

    Graph* graph = createGraph(V, E);

    for (int i = 0; i < E; i++) {
        cout << "Enter source, destination, and weight of edge " << i + 1 << ": ";
        cin >> graph->edges[i].src >> graph->edges[i].dest >> graph->edges[i].weight;
    }

    KruskalMST(graph);

    delete[] graph->edges;
    delete graph;
    return 0;
}
