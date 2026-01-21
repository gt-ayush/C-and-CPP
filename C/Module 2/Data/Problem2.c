#include <stdio.h>

int main() {
    int n,s;
    printf("Enter a no.:");
    scanf("%d", &n);
    for (int i = 1; i<=10 ; i++){
        s = n * i;
        printf("%d x %d = %d\n",n,i,s);
    }
}