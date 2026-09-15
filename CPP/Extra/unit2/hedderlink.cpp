//cilcular linked list
#include<bits/stdc++.h>

using namespace std;

class Node;

class Header{
    public:
    int count = 0;
    Node *next = NULL;
};

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

void deleteAtPos(Header &header, int pos){
    if(header.next == NULL || pos < 1 || pos > header.count) return;

    Node *temp = header.next;
    for(int i = 1; i < pos; i++){
        temp = temp->next;
    }

    if(header.count == 1){
        header.next = NULL;
    } else {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        if(pos == 1) header.next = temp->next;
    }

    delete temp;
    --header.count;
}

void insertAtPos(Header &header, int value, int pos){
    if(pos < 1 || pos > header.count + 1) return;

    Node *newNode = new Node(value);

    if(header.next == NULL){
        header.next = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
        ++header.count;
        return;
    }

    Node *temp = header.next;
    if(pos == 1) temp = header.next->prev;
    else {
        for(int i = 1; i < pos - 1; i++){
            temp = temp->next;
        }
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
    if(pos == 1) header.next = newNode;
    ++header.count;
}

void display(const Header &header){
    if(header.next == NULL) return;

    Node *temp = header.next;
    for(int i = 0; i < header.count; i++){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    Header header;
    insertAtPos(header, 5, 1);
    insertAtPos(header, 10, 2);
    insertAtPos(header, 15, 3);
    insertAtPos(header, 20, 4);
    deleteAtPos(header, 2);
    display(header);
}