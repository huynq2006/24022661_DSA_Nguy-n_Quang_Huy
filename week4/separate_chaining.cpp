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
    Node* current = a[index];
    while (current != nullptr) {
        if (current->key == key) {
            current->value = value; 
            return;
        }
        current = current->next;
    }
`   // Nếu không trùng key
    Node* newNode = new Node{key, value, a[index]};
    a[index] = newNode;
}

void search(vector<Node*>& a, int n, int key) {
    int index = hashfunc(key, n);
    Node* current = a[index];
    while (current != nullptr) {
        if (current->key == key) {
            cout << "Node's value = " << current->key;
            return;
        }
        current = current->next;
    }
    cout << "Unable to find " << key << endl;
}

void delete(vector<Node*>& a, int n, int key) {
    int index = hashfunc(key, n);
    Node* current = a[index];
    Node* prev = nullptr;
    if (current == nullptr) return;
    
    while (current != nullptr && current->key != key) {
        prev = current;
        prev->next = current->next;
    }

    if (prev == nullptr) {
        a[index] = current->next;
    } else {
        prev->next = current->next;
    }

    delete current;
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
    
    for (int i = 0; i < n; i++) {
        Node* current = a[i];
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
    
    return 0;
}