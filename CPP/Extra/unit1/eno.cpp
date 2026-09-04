#include <stdio.h>
#include <iostream>
using namespace std;
enum days {sun,mon,tue,wed,thr,fri,sat};
class student {
    public:
        int hello(){
            return 90;
        };
};


int main(){
    days day1=mon;
    printf("Hello world\n");
    student s;
    printf("Hello world\n%d\n%d\n",s.hello(),day1);
    cout<<day1;
}