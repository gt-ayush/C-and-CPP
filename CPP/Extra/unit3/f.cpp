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
    }
    fin.close();
}