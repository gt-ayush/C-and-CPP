#include <stdio.h>

int main() {

    int n[4];
    for (int i = 0 ; i <= 4 ; i++){
        printf("Enter the %d no. : ", i);
        scanf("%d" , &n[i]);
    }
    for (int j = 0 ; j<=4 ; j++ ) {
        printf("%d\n",n[j]);
    }
}