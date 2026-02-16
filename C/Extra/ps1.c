#include <stdio.h>

void main () {
    int a[5],s=0;
    for (int i = 0; i<5 ; i++) {
        printf("Enter the marks of [%d] : ",i);
        scanf("%d",&a[i]);
        s = s + a[i] ;
    }
    printf("%d%%",(s/5));
}