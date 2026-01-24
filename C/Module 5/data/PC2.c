#include <stdio.h>
void squareMe(int *n){
    *n = (*n)*(*n);
}


int main() {
    int val=5;
    squareMe(&val);
    printf("%d" , val);

}