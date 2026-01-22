#include <stdio.h>

int main () {

    int a = 0 , b=90;
    printf("%d , %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b ;
    printf("%d , %d",a,b);
}