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
    int count;
    public:
        Queue(){
            front = nullptr;
            rear = nullptr;
            count = 0;
        }
        void enqueue(int value){  
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
            count++;
        }

        void dequeue(){  
            if(front == nullptr){
                cout << "Queue is empty | Underflow" << endl;
                return;
            }
            Node *temp = front;
            front = front->next;
            delete temp;
            count--;

            if(front == nullptr){ 
                rear = nullptr;
            }
        }

        void display(){
            Node *temp = front;
            cout<<"Queue Size: "<<count<<"\nQueue elements: ";
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