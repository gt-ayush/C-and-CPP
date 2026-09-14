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

void deleteAtHead(Node* &head){
    if(head == NULL) return;
    
    Node *temp = head;
    head = head->next;
    if(head != NULL) {
        head->prev = NULL;
    }
    delete temp;
}

void deleteAtEnd(Node*&head){
    if(head == NULL) return;
    
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    if(temp->prev != NULL) {
        temp->prev->next = NULL;
    } else {
        head = NULL;
    }
    delete temp;
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


void display(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->data<< " ";
        temp = temp->next;
    }
}
int main(){
    Node *head = NULL;
    deleteAtHead(head);
    deleteAtEnd(head);
    deleteAtPos(head,2);
    //display(head);
    cout << head->data;
}