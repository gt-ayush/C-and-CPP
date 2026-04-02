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

    for (int i =0 ; i < l ; i++) {
        printf("%d | ",n[i]);
    } 
    printf("\n");
    int del;
    printf("Enter the number to delete : ");
    scanf("%d",&del);
    for (int i = 0 ; i < l ; i++) {
        if (n[i] == del) {
            for (int j = i; j < l - 1; j++) {
                n[j] = n[j + 1]; // Shift elements to the left
            }
            l--; // Decrease the size of the array
            break; // Exit the loop after deleting the element
        }
    }
    for (int i =0 ; i < l ; i++) {
        printf("%d | ",n[i]);
    } }