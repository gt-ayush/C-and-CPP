#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class Queue{
    Node *front;
    Node *rear;
    public:
        Queue(){
            front = nullptr;
            rear = nullptr;
        }
        void enqueue(int value){  // Add an element to the end of the queue
            Node *newNode = new Node();
            newNode->data = value;
            newNode->next = nullptr;

            if(rear == nullptr){
                front = newNode;
                rear = newNode;
            } else {
                rear->next = newNode;
                rear = newNode;
            }
        }

        void dequeue(){  // Remove an element from the front of the queue
            if(front == nullptr){
                cout << "Queue is empty | Underflow" << endl;
                return;
            }
            Node *temp = front;
            front = front->next;
            delete temp;

            if(front == nullptr){ // If the queue becomes empty after dequeue, set rear to nullptr
                rear = nullptr;
            }
        }

        void display(){
            Node *temp = front;
            while(temp != nullptr){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}