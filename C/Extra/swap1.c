#include <stdio.h>
void swap(int *p1, int *p2){
    int c=*p1;
    *p1=*p2;
    *p2=c;
}

void swap_num(int *p1, int *p2, int *p3){
    if (*p1>*p2 && *p1>*p3){
        if(*p2>*p3)
        swap(p1,p3);
        else
        swap(p1,p2);
    }
    else if (*p2>*p1 && *p2>*p3){
        if(*p1>*p3)
        swap(p2,p3);
        else
        swap(p1,p2);
    }
    else{
        if(*p1>*p2)
        swap(p2,p3);
        else
        swap(p1,p3);
    }
}
void main(){
    int a=10,b=15,c=90;
    printf("before swap a=%d, b=%d, c=%d\n",a,b,c);
    swap_num(&a,&b,&c);
    printf("after swap a=%d, b=%d, c=%d\n",a,b,c);
}