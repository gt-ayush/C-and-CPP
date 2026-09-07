#include <iostream>
using namespace std;

struct List{
    int data;
    List *next;
    List(int val){
        data=val;
        next=NULL;
    }
};

int main(){
    
    List *head, *n2, *n3, *n4;
    
    head = new List(10);
    n2 = new List(20);
    n3 = new List(30);
    n4 = new List(40);

    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    cout << "The linked list is: ";
    cout << head->data << " ";
    cout << head->next->data << " ";
    cout << head->next->next->data << " ";
    cout << head->next->next->next->data << " ";
}