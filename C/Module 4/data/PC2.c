#include <stdio.h>

int main() {
    char FirstName[50];
    int age;
    printf("First Name : ");
    scanf("%s" , FirstName);
    printf("Age : ");
    scanf ("%d", &age);
    printf("Hi %s, you are %d years old.", FirstName,age);

}