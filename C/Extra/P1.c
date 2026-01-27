#include <stdio.h>

int main () {

    int a = 5;
    int b = ++a;
    printf("%d , %d\n",a,b);

    b = a++;
    printf("%d , %d\n",a,b);

    printf("%d %d ",++a,a++);

    int c = ++b + b++;
    printf("%d",c);

    
}