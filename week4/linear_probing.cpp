#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int value;
    int key;
};

int hashfunc(int key, int n) {
    return key % n; 
}

void insert(vector<Node*>& a, int n, int key, int value) {
    int index = hashfunc(key, n);
    int original_index = index;
    while (a[index] != nullptr) {
        if (a[index]->key == key) {
            a[index]->value = value;
            return;
        }
        index = (index + 1) % n;
        
        if (index == original_index) {
            cout << "Bang bam da day, khong the chen " << key << endl;
            return;
        }
    }
`   // Nếu không trùng key
    Node* newNode = new Node{key, value};
    a[index] = newNode;
}

void search(vector<Node*>& a, int n, int key) {
    int index = hashfunc(key, n);
    int original_index = index;
    while (a[index] != nullptr) {
        if (a[index]->key == key) {
            cout << "Node's value = " << current->key;
            return;
        }
        index = (index + 1) % n;

        if (index == original_index) break;
    }
    cout << "Khong tim thay khoa " << key << endl;
}

void delete(vector<Node*>& a, int n, int key) {
    int index = hashfunc(key, n);
    int original_index = index;
    while (a[index] != nullptr) {
        if (current->key == key) {
            delete current;
            return;
        }
        index = (index + 1) % n;

        if (index == original_index) {
            break;
        }
    }
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
        if (a[i] != nullptr) {
            delete a[i];
        }
    }
    
    return 0;
}