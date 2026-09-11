#include <iostream>
using namespace std;

class pr{
    int p[10]={0};
    public:
    int *pp=p;

    void set(int index, int value[]){
        for(int i=0;i<10;i++){
            if(i==index){
                pp[i]=value[i];
            }
        }
    }
    int opr(){
        for(int i=0;i<10;i++){
            if(pp[i]!=0){
                return pp[i];
            }
        }
        return 0;
    }
    void display(){
       for(int i=0;i<10;i++){
            cout<<pp[i]<<" ";
        }
        cout<<endl;
    }

};

int main() {
    pr obj;
    int values[10] = {0,1,2,3,4,5,6,7,8,9};
    values[0] = 10;
    obj.set(0, values);
    cout << obj.opr() << endl;
    obj.display();
    return 0;
}