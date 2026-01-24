#include <stdio.h>

int main() {

    int n[5];
    for (int i = 0 ; i < 5 ; i++){
        printf("Enter the %d no. : ", i);
        scanf("%d" , &n[i]);
    }
    for (int j = 0 ; j< 5 ; j++ ) {
        printf("%d\n",n[j]);
    }
}