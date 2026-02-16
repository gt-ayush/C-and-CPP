#include <stdio.h>
void main() {
    int i,s=0;
    scanf("%d",&i);
    for(int j=1 ; j<=(i/2);j++){
       if ( i%j==0) {
        s=s+j;
        } 
    }
    i==s? printf("palindrome %d = %d",s,i) : printf("not palendrome %d != %d",s,i);
}