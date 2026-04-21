#include <stdio.h>

void main () {
    int len;

    printf("Enter the length of the array : ");
    scanf("%d",&len);

    int l[len];

    for (int i =0 ; i < len  ; i++){
        printf("Enter the value at index [%d] : ",i);
        scanf("%d",&l[i]);
        
    }

    for (int i = 0 ; i < len-1 ; i ++) {

        for (int j = i+1 ; j< len;j++) {
            if (l[i]>l[j]){
                l[i] ^= l[j];
                l[j] ^= l[i];
                l[i] ^= l[j];
            }
        }
    }

    for(int i = 0 ; i < len ; i++) {
        printf("%d | ",l[i]);
    }

    printf("\n");
    
    int ele;
    printf("Enter the Element: ");
    scanf("%d",&ele);
    len++;

    printf("\n");
     
    int new[len];
    int c=0;
    for (int i = 0 ; i < len ; i++) {
        if (ele > l[i] && ele < l[i+1]) {
            new[i] = l[i];
            new[i+1] = ele;
            c=1;
        } else if (c == 0) {
            new[i] = l[i];
        }
        else {
            new[i+1] = l[i];
        }
    }

    printf("The new array is : \n");
    for (int i = 0 ; i < len ; i++) {   
        printf("%d | ",new[i]); 
    }
    printf("\n");

    printf("The Index of the element is : " );
    for (int i = 0 ; i < len-2 ; i++) {
        if (new[i] == ele) {
            printf("%d",i);
            break;
        }
    }
}