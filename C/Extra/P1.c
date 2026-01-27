#include <stdio.h>

int main () {

    int a = 5;
    int b = ++a;
    printf("%d , %d\n",a,b);

    b = a++;
    printf("%d , %d",a,b);
}