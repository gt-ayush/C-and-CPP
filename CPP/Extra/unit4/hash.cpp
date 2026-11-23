#include <iostream>
using namespace std;

#define size 100

int table[size];

int hashFunction(int key) {
    return key % size;
}

void insert(int key) {
    int index = hashFunction(key);
    while (table[index] != -1) {
        index = (index + 1) % size; 
    }
    table[index] = key;
}

void search(int key) {
    int index = hashFunction(key);
    while (table[index] != -1) {
        if (table[index] == key) {
            cout << "Key " << key << " found at index " << index << endl;
            return;
        }
        index = (index + 1) % size; 
    }
    cout << "Key " << key << " not found in the hash table." << endl;
}

void deleteKey(int key) {
    int index = hashFunction(key);
    while (table[index] != -1) {
        if (table[index] == key) {
            table[index] = -1; 
            cout << "Key " << key << " deleted from index " << index << endl;
            return;
        }
        index = (index + 1) % size; 
    }
    cout << "Key " << key << " not found in the hash table." << endl;
}

void display() {
    cout << "Hash Table: ";
    for (int i = 0; i < size; i++) {
        if (table[i] != -1) {
            cout << table[i] << " ";
        } else {
            cout << "- ";
        }
    }
    cout << endl;
}

int main(){
    fill_n(table, size, -1);
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    display();

    search(30); 
    search(60); 

    deleteKey(30);
    deleteKey(60);

    display();

    return 0;
}