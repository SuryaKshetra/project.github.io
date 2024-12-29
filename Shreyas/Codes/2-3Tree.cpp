#include <iostream>
using namespace std;

// 2-3 Tree implementation is advanced; simplified structure below
struct Node {
    int keys[3];     // Max 2 keys
    Node* children[4]; // Max 3 children
    int n;           // Number of keys
    bool isLeaf;

    Node(bool leaf) : n(0), isLeaf(leaf) {
        for (int i = 0; i < 4; i++) children[i] = nullptr;
    }
};

void traverse(Node* node) {
    for (int i = 0; i < node->n; i++) {
        if (!node->isLeaf)
            traverse(node->children[i]);
        cout << node->keys[i] << " ";
    }

    if (!node->isLeaf)
        traverse(node->children[node->n]);
}

Node* insertKey(Node* root, int key) {
    // Simplified insertion logic
    if (!root) {
        root = new Node(true);
        root->keys[0] = key;
        root->n = 1;
        return root;
    }

    if (root->isLeaf) {
        root->keys[root->n] = key;
        root->n++;
    }

    return root;
}

int main() {
    Node* root = nullptr;

    root = insertKey(root, 10);
    root = insertKey(root, 20);
    root = insertKey(root, 30);

    cout << "Fault reports stored in the tree: ";
    traverse(root);
    cout << endl;

    return 0;
}
