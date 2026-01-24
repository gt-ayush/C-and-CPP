#include <stdio.h>

int main() {

    int score = 0;
    int *ptr = &score;

    printf("Enter the value : ");
    scanf("%d",&*ptr);

    printf("%d" , score);

}