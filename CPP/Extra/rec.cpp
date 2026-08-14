//mentain a record of one student using a class which has int roll,char name,double marks.

#include <iostream>
#include <stdio.h>
using namespace std;

class student{
    public:
    int Roll_no;
    char Name[20];
    double Marks;
};

int main(void){
    student Ayush;
    cout<<"Enter Roll No., Name and Marks of the student: "<<endl;
    cin>>Ayush.Roll_no;
    cin>>Ayush.Name;
    cin>>Ayush.Marks;
    printf("Name: %s\n", Ayush.Name);
    printf("Roll No. : %d\n", Ayush.Roll_no);
    printf("Marks : %.2f\n", Ayush.Marks);
    return 0;
}