#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int value;
    int key;
    Node* next;
};

int hashfunc(int key, int n) {
    return key % n; 
}

void insert(vector<Node*>& a, int n, int key, int value) {
    int index = hashfunc(key, n);
    Node* newNode = new Node;
    newNode->key = key;
    newNode->value = value;

    newNode->next = a[index];
    a[index] = newNode;
}

int main() {
    int n;
    cin >> n;
    vector<Node*> a(n, nullptr);
    for (int i = 0; i < n; i++) {
        int key, value;
        cout << "Nhập key và value: ";
        cin >> key >> value;
        insert(a, n, key, value);
    }
    
    return 0;
}