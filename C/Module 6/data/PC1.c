#include <stdio.h>

int main () {
    int arr[3]={100,200,300};
    int *ptr = arr;
    for (int i =0 ; i<3 ; i++){
        printf("%d\n",*(ptr+i));
    }
}