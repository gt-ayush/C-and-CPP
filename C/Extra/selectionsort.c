#include <stdio.h>

void main () {
    int l= 5;
    int n[] = {1,10,60,50,0};

    for (int i = 0 ; i < l-1 ; i ++) {

        for (int j = i+1 ; j<l;j++) {
            if (n[i]>n[j]){
                n[i] ^= n[j];
                n[j] ^= n[i];
                n[i] ^= n[j];
            }
        }
    }
    for (int i =0 ; i < l ; i++) {
        printf("%d | ",n[i]);
    }

}