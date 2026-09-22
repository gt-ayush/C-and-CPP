#include <fstream>
#include <iostream>

using namespace std;

class no{
    int no[3];
    public:
    void getdata(){
        cout<<"Enter no."<<endl;
        
        for(int i=0;i<3;i++){
            cin>>no[i];
        }
    }
    void savedate(){
        ofstream fout;
        fout.open("C:\\Users\\Ayush Kumar Gupta\\Desktop\\Repo\\C-and-CPP\\CPP\\Extra\\unit3\\no.txt");//iso::app is used to append the data in file if file already exists
        for(int i=0;i<3;i++){
            fout<<no[i]<<" ";
        }
        fout<<endl;
        fout.close();
    }
};

int max(){
    ifstream fin;
    fin.open("C:\\Users\\Ayush Kumar Gupta\\Desktop\\Repo\\C-and-CPP\\CPP\\Extra\\unit3\\no.txt");
    if(!fin){
        return 0;
    }

    int maximum = -101;
    int value;
    while(fin >> value){
        if(value > maximum){
            maximum = value;
        }
    }

    fin.close();
    return maximum;
}


int main  ()  
{
    no s; // taking 3 no. saving it on file and then find max and min no. from file
    
        s.getdata();
        s.savedate();
 
        cout<<"Max no. is "<<max()<<endl;
}