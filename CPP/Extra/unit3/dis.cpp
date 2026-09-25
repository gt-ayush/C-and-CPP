#include <fstream>
#include <iostream>

using namespace std;

class table{
    int no;
    public:
    void getdata(){
        cout<<"Enter no."<<endl;
        cin>>no;
    }
    void savetable(){
        ofstream fout;
        fout.open("C:\\Users\\Ayush Kumar Gupta\\Desktop\\Repo\\C-and-CPP\\CPP\\Extra\\unit3\\table.txt");
            for(int i=1;i<=10;i++){
                fout<<no<<" * "<<i<<" = "<<no*i<<endl;  
        }
        fout<<endl;
        fout.close();
    }
    void displaytable(){
        ifstream fin;
        fin.open("C:\\Users\\Ayush Kumar Gupta\\Desktop\\Repo\\C-and-CPP\\CPP\\Extra\\unit3\\table.txt");
        if(!fin){
            cout<<"File not found"<<endl;
            return;
        }
        string line;
        while(getline(fin,line)){
            cout<<line<<endl;
        }
        fin.close();
    }
};




int main  ()  
{
    table s; 
    
        s.getdata();
        s.savetable();
        s.displaytable();
}