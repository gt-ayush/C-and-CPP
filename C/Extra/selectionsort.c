#include <stdio.h>

void main () {
    int l;
    printf("Enter the length of the array : ");
    scanf("%d",&l);

    int n[l];

    for (int i = 0 ; i < l ; i++) {
        printf("Enter the number : ");
        scanf("%d",&n[i]);
    }

    for (int i = 0 ; i < l-1 ; i ++) {

        for (int j = i+1 ; j<l;j++) {
            if (n[i]<n[j]){
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