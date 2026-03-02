#include <stdio.h>

int product ( int a ) {
    if (a==1)return 1 ;

    return (a%10)*product (a/10);
}

void main() {
    printf("%d",product (123));
}