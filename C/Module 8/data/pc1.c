#include <stdio.h>
#include <stdlib.h>


void main () {
    int length;
    int *arr =malloc(5* sizeof ( int ));
    printf("How many integers do you want to store : ");
    scanf("%d",&length);
    for (int i = 0 ; i<length ; i++ ){
        printf ("Enter the [%d] Number : ",i);
        scanf("%d", &arr[i]);
    }
    for (int i=0 ; i<length ; i++){
        printf("The value at the [%d] index is : [%d] \n",i,arr[i]);
    }
   free(arr);
}

