#include <stdio.h>

void main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) 
        scanf("%d ",&arr[i][j]); 
        printf("\n");
    }
    int cs;
    scanf("%d ",&cs);
    for(int i=r-1;i>=0;i--){
        for (int j=0;j<i;j++) {
        if (arr[j][cs]>arr[j+1][cs]) {
        int temp = arr[j][cs];
        arr[j][cs] = arr[j+1][cs];
        arr[j+1][cs] = temp;
    }}}
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) 
        printf("%d ",arr[i][j]); 
        printf("\n");
    }
    
}