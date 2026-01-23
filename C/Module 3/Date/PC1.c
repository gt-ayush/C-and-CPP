#include <stdio.h>

float CalculateArea(float length , float width) {

    return length*width;
}

int main (){
    float l,w,t;
    printf("Enter the length: ");
    scanf("%f",&l);
    printf("Enter the width: ");
    scanf("%f",&w);
    t = CalculateArea(l,w);
    printf("The calculated area is : %.2f",t);
}