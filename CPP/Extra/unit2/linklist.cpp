#include <iostream>
using namespace std;
//uni directional linklist in structure without using new keyword
struct List{
    int data;
    List *next;
    List(int val){
        data=val;
        next=NULL;
    }
};

int main(){
    
    List head(10), n2(20), n3(30), n4(40);

    head.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = NULL;

    cout << "The linked list is: ";
    while(&head != NULL){
        cout << head.data << " ";
        head = *head.next;
    }
}