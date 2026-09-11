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
    void leanser(int elem){ 
        for(int i=0;i<l;i++){
            if(pp[i]==elem)
            {
                cout<<"Element "<<elem<<" found at index "<<i<<endl;
                break;
            }
        }
    }
    void display()
    {
       for(int i=0;i<l;i++){
            cout<<pp[i]<<" ";
        }
        cout<<"\nSum: "<<s<<endl;
    }

};

int main() {
    pr obj;
    pr *o=&obj;
    void (pr::*sth)(int*, int) = &pr::set;
    int values[10] = {0,1,2,3,4,5,6,7,8,9};
    (o->*sth)(values, 10);
    (o->*(&pr::sum))();
    (o->*(&pr::display))();
    (o->*(&pr::leanser))(7);
    return 0;
}