#include <iostream>
using namespace std;    
//remove all comments

int midsquareHash(int key, int tableSize) {
    int squared = key * key;
    string squaredStr = to_string(squared);
    int len = squaredStr.length();
    int midStart = (len - 2) / 2; 
    string midDigits = squaredStr.substr(midStart, 2); 
    int midValue = stoi(midDigits);
    return midValue % tableSize;
}

int devisionHash(int key, int tableSize) {
    return key % tableSize;
}

int foldingHash(int key, int tableSize) {
    int sum = 0;
    while (key > 0) {
        sum += key % 10; 
        key /= 10;       
    }
    return sum % tableSize;
}

int hashFunction(int key, int tableSize) {
    return midsquareHash(key, tableSize);
}

int displayHashTable(int hashTable[], int tableSize) {
    for (int i = 0; i < tableSize; i++) {
        cout << "Index " << i << ": " << hashTable[i] << endl;
    }
}

int insertIntoHashTable(int hashTable[], int tableSize, int key) {
    int index = hashFunction(key, tableSize);
    hashTable[index] = key; 
    return index;
}

int main() {
    const int tableSize = 10;
    int hashTable[tableSize] = {0}; 

    int keys[] = {15, 25, 35, 45, 55};
    int numKeys = sizeof(keys) / sizeof(keys[0]);

    for (int i = 0; i < numKeys; i++) {
        int index = hashFunction(keys[i], tableSize);
        hashTable[index] = keys[i]; 
    }

    displayHashTable(hashTable, tableSize);

    return 0;
}