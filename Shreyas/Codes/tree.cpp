#include <iostream>
using namespace std;

struct Node {
    string service;
    Node* left;
    Node* right;
};

Node* createNode(string service) {
    Node* newNode = new Node();
    newNode->service = service;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

void inOrderTraversal(Node* root) {
    if (root != nullptr) {
        inOrderTraversal(root->left);
        cout << root->service << endl;
        inOrderTraversal(root->right);
    }
}

int main() {
    Node* root = createNode("Central Management");
    root->left = createNode("Water Supply");
    root->right = createNode("Waste Management");
    root->left->left = createNode("Residential Water");
    root->left->right = createNode("Industrial Water");

    cout << "Service Tree In-Order Traversal:\n";
    inOrderTraversal(root);
    return 0;
}
