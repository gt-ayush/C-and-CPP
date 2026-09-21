#include <fstream>
#include <iostream>
using namespace std;
int main  ()  
{
    ofstream fout;
    ifstream fin;
    fout.open("sample.txt");
    fout<<"Hello World";
    fout.close();
    fin.open("sample.txt");
    char c;
    while(fin)
    {
        fin.get(c);
        cout<<c; 
        //it will print dublicat element at end because after reading last element it will check for eof and it will be false so it will print last element again
    }
    fin.close();
}