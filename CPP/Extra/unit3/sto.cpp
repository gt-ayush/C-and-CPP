
//store a student details in a file and count the no. of words and spaces and no. of lines in the file
#include <iostream>
#include <fstream>
using namespace std;

class student{
    private:
    string name;
    int rollno;

    public:

    void getdata(){
        cout<<"Enter name and roll no."<<endl;
        cin>>ws;
         //ws is used to ignore leading whitespace characters in the input stream before reading the name. This ensures that if there are any spaces or newlines before the actual name input, they will be skipped, allowing for accurate reading of the name.
        getline(cin, name);
        cin>>rollno;
        cin.ignore();
        //cin.ignore() is used to ignore the newline character left in the input stream after reading the roll number. This prevents any issues when reading subsequent input, especially if you plan to read more lines or strings after this.
    }

    void storedata(){
        ofstream fout;
        fout.open("C:\\Users\\Ayush Kumar Gupta\\Desktop\\Repo\\C-and-CPP\\CPP\\Extra\\unit3\\student.txt", ios::app);
        fout<<name<<" "<<rollno<<endl;
        fout.close();
    }

};

void countdata(){
    ifstream fin;
    fin.open("C:\\Users\\Ayush Kumar Gupta\\Desktop\\Repo\\C-and-CPP\\CPP\\Extra\\unit3\\student.txt");
    if(!fin){
        cout<<"File not found"<<endl;
        return;
    }

    string line;
    int words=0, spaces=0, lines=0;

    while(getline(fin, line)){
        lines++;
        bool inWord = false;

        for(char ch : line){
            if(ch == ' '){
                spaces++;
                inWord = false;
            }
            else if(!inWord){
                words++;
                inWord = true;
            }
        }
    }

    cout<<"No. of lines: "<<lines<<endl;
    cout<<"No. of words: "<<words<<endl;
    cout<<"No. of spaces: "<<spaces<<endl;
    fin.close();
}

int main(){
    student s[3];
    for(int i=0;i<3;i++){
        s[i].getdata();
        s[i].storedata();
    }
    countdata();
}