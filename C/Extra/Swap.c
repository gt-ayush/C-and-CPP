#include <stdio.h>

int main () {

    int a = 8 , b=90;
    printf("%d , %d\n",a,b);
    a=a^b;
    printf("%d , %d\n",a,b);
    b=a^b;
    printf("%d , %d\n",a,b);
    a=a^b ;
    printf("%d , %d",a,b);
}