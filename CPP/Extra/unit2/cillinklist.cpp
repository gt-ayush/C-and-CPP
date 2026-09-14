//cilcular linked list
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

void circlelinklist(Node* &head){
    if(head == NULL) return;
    
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    temp->next = head;
    head->prev = temp;
}

void deleteAtPos(Node*&head,int pos){
    if(head == NULL) return;
    
    Node *temp = head;
    for(int i=1;i<pos;i++){
        temp = temp->next;
    }
    
    if(temp->prev != NULL) {
        temp->prev->next = temp->next;
    } else {
        head = temp->next;
    }
    
    if(temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    delete temp;
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
    circlelinklist(head);
    insertAtPos(head, 5, 1);
    deleteAtPos(head, 1);
    //display(head);
    cout << head->data;
}