#include <stdio.h>

void main () {
    int x[10] =  {1,3,24,53,24,54,76,23,90,100};
    for (int i = 10;i>1;i--){
        for ( int j = 0 ; j<i ; j ++) {
            if ( x[j] > x[j+1]) {
                x[j]   ^= x[j+1];
                x[j+1] ^= x[j];
                x[j]   ^= x[j+1]; 
            }
        }
    }
    for (int i = 0 ;i<10 ;i++) {
        printf("%d  |  ",x[i]);
    }
}