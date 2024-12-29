#include <iostream>
using namespace std;

struct Node {
    int priority;
    Node* left;
    Node* right;

    Node(int p) : priority(p), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int priority) {
    if (!root)
        return new Node(priority);

    if (priority < root->priority)
        root->left = insert(root->left, priority);
    else
        root->right = insert(root->right, priority);

    return root;
}

void inOrder(Node* root) {
    if (root) {
        inOrder(root->left);
        cout << root->priority << " ";
        inOrder(root->right);
    }
}

int main() {
    Node* root = nullptr;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);

    cout << "Emergency routes ranked by priority: ";
    inOrder(root);
    cout << endl;

    return 0;
}
