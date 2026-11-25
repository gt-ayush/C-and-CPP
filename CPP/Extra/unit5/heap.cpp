//creating heap
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* Left;
    Node* Right;

    Node(int val){
        data = val;
        Left = nullptr;
        Right = nullptr;
    }
};

class MAXHEAP{
    public:
    Node* root;

    MAXHEAP(int val){
        root = new Node(val);
    }

    ~MAXHEAP(){
        deleteTree(root);
    }

    void insert(Node* node, int val){
        if(val < node->data){
            if(node->Left == nullptr){
                node->Left = new Node(val);
            } else {
                insert(node->Left, val);
            }
        } else {
            if(node->Right == nullptr){
                node->Right = new Node(val);
            } else {
                insert(node->Right, val);
            }
        }
    }

    void deleteTree(Node* node){
        if(node == nullptr) return;
        deleteTree(node->Left);
        deleteTree(node->Right);
        delete node;
    }
};

int main(){
    MAXHEAP heap(10);
    heap.insert(heap.root, 5);
    heap.insert(heap.root, 15);
    heap.insert(heap.root, 3);
    heap.insert(heap.root, 7);

    // The destructor will be called automatically when 'heap' goes out of scope
    return 0;
}

//why NOde is used insted of array in heap implementation?
// In this implementation, a Node class is used to represent each element in the heap, allowing for a more flexible and dynamic structure. Using nodes allows for easier insertion and deletion of elements, as well as the ability to create a binary tree structure that can grow and shrink as needed.
//why not use array in heap implementation?
// While arrays can be used to implement heaps, they have a fixed size and can be less flexible when it comes to dynamic memory allocation. Using a node-based structure allows for easier management of memory and can handle varying sizes of heaps without the need for resizing or reallocating arrays. Additionally, node-based heaps can be more intuitive to implement and understand, especially when dealing with complex operations like insertion and deletion.