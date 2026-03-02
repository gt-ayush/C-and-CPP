#include <stdio.h>

int binary ( int n ) {
    if (n==0) return 0;
    return (n%2) + 10*binary(n/2);
}

void main() {printf("%d",binary(10));}