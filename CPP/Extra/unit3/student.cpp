#include <fstream>
#include <iostream>
using namespace std;

class student{
    int roll;
    string name;
    int marks[5];
    public:
    void getdata(){
        cout<<"Enter roll number and name of student"<<endl;
        cin>>roll>>name;
        cout<<"Enter marks of 5 subjects"<<endl;
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void savedate(){
        ofstream fout;
        fout.open("student.csv",ios::app);//iso::app is used to append the data in file if file already exists
        fout<<roll<<","<<name<<",";
        for(int i=0;i<5;i++){
            fout<<marks[i]<<",";
        }
        fout<<endl;
        fout.close();
    }
};

int main  ()  
{
    student s[10]; // Assuming a maximum of 10 students
    for(int i=0; i<10; i++){
        s[i].getdata();
        s[i].savedate();
    }
}