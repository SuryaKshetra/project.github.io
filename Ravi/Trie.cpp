```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children; // Map to store children nodes
    bool isEndOfWord; // True if it's the end of a word

    TrieNode() : isEndOfWord(false) {}
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    // Insert a word into the Trie
    void insert(string word) {
        TrieNode* current = root;
        for (char c : word) {
            if (current->children.find(c) == current->children.end()) {
                current->children[c] = new TrieNode();
            }
            current = current->children[c];
        }
        current->isEndOfWord = true; // Mark the end of the word
    }

    // Search for a complete word in the Trie
    bool search(string word) {
        TrieNode* current = root;
        for (char c : word) {
            if (current->children.find(c) == current->children.end()) {
                return false; // Character not found
            }
            current = current->children[c];
        }
        return current->isEndOfWord; // Return true if it's the end of a word
    }

    // Check if any word starts with the given prefix
    bool startsWith(string prefix) {
        TrieNode* current = root;
        for (char c : prefix) {
            if (current->children.find(c) == current->children.end()) {
                return false; // Prefix not found
            }
            current = current->children[c];
        }
        return true; // Return true if prefix exists
    }
};

int main() {
    Trie trie;

    // Insert some civic-related service requests
    trie.insert("waste collection");
    trie.insert("street lighting");
    trie.insert("public health");
    trie.insert("emergency services");

    // Example searches
    cout << "Search 'waste collection': " << (trie.search("waste collection") ? "Found" : "Not Found") << endl;
    cout << "Search 'street light': " << (trie.search("street light") ? "Found" : "Not Found") << endl;

    // Example prefix search
    cout << "Prefix search 'street': " << (trie.startsWith("street") ? "Found" : "Not Found") << endl;
    cout << "Prefix search 'public': " << (trie.startsWith("public") ? "Found" : "Not Found") << endl;

    return 0;
}
