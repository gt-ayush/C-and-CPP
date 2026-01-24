#include <stdio.h>

float toFahrenheit (float celsius) {

    return (celsius*9.0/5.0)+32.0;
}

int main() {
    float c;
    printf("Enter the celsius : ");
    scanf("%f" , &c);
    printf("The Fahrenheit = %.2f " , toFahrenheit(c));
}