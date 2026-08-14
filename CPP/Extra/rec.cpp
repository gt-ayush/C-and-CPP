//mentain a record of one student using a class which has int roll,char name,double marks.

#include <iostream>
#include <cstring>
using namespace std;

class student{
    private:
        int Roll_no;
        char Name[20];
        double Marks;
    public:
        void setRoll_no(int r){
            Roll_no = r;
        }
        void setName(char n[]){
            strcpy(Name, n);
        }
        void setMarks(double m){
            Marks = m;
        }
        void get(){
            cout<<"Roll No. : "<<Roll_no<<endl;
            cout<<"Name : "<<Name<<endl;
            cout<<"Marks : "<<Marks<<endl;
        }
};

int main(void){
    student Ayush;
    cout<<"Enter Roll No., Name and Marks of the student: "<<endl;
    int roll;
    char name[20];
    double marks;
    cin>>roll;
    cin>>name;
    cin>>marks;
    Ayush.setRoll_no(roll);
    Ayush.setName(name);
    Ayush.setMarks(marks);
    Ayush.get();
    return 0;
}