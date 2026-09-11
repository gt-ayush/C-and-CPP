#include <iostream>
using namespace std;

class pr{
    int p[10]={0};
    public:
    int *pp=p;
    int s=0;
    int l=0;

    void set(int value[],int len){
        l=len;
        for(int i=0;i<len;i++){
            pp[i]=value[i];
            }
        }
    void sum(){
        for(int i=0;i<l;i++){
           s+=pp[i];                     
        }
    }
    void display(){
       for(int i=0;i<l;i++){
            cout<<pp[i]<<" ";
        }
        cout<<"\nSum: "<<s<<endl;
    }

};

int main() {
    pr obj;
    int values[10] = {0,1,2,3,4,5,6,7,8,9};
    obj.set(values,10);
    obj.sum();
    obj.display();
    return 0;
}