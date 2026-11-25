//chain hash
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void hashFunction(Node** table, int key, int size) {
    int index = key % size;
    Node* newNode = new Node(key);
    if (table[index] == nullptr) {
        table[index] = newNode;
    } else {
        Node* temp = table[index];
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insert(Node** table, int key, int size) {
    hashFunction(table, key, size);
}

void search(Node** table, int key, int size) {
    int index = key % size;
    Node* temp = table[index];
    while (temp != nullptr) {
        if (temp->data == key) {
            cout << "Key " << key << " found at index " << index << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Key " << key << " not found in the hash table." << endl;
}

int main() {
    const int size = 10;
    Node** table = new Node * [size];
    for (int i = 0; i < size; i++) {
        table[i] = nullptr;
    }

    insert(table, 10, size);
    insert(table, 20, size);
    insert(table, 30, size);
    insert(table, 40, size);

    search(table, 20, size);
    search(table, 50, size);

    // Clean up memory
    for (int i = 0; i < size; i++) {
        Node* temp = table[i];
        while (temp != nullptr) {
            Node* toDelete = temp;
            temp = temp->next;
            delete toDelete;
        }
    }
    delete[] table;

    return 0;
}