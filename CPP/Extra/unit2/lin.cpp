// You are using Java
#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(Node* &head,int value){
    Node *newNode = new Node(value);
    
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtEnd(Node*&head,int value){
    Node *newNode = new Node(value);
    Node *temp = head;
    
    while(temp->next!=NULL){
        temp = temp->next;
    }
    
    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtPos(Node*&head,int value,int pos){
    Node *newNode = new Node(value);
    
    Node *temp = head;
    for(int i=1;i<pos;i++){
        temp = temp->next;
    }
    
    newNode->next = temp->next;
    temp->next->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;
}

void display(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->data<< " ";
        temp = temp->next;
    }
}
int main(){
    Node *head = NULL;
    insertAtHead(head,10);
    insertAtEnd(head,40);
    insertAtPos(head,20,2);
    insertAtPos(head,30,3);
    //display(head);
    cout << head->data;
}