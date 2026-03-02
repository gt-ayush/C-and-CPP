#include <stdio.h>

int po_(int n ,int p ) {
    if(p == 0) return 1;
    return n* po_(n,p-1);
}
void main(){
    printf("%d",po_(3,4));
}