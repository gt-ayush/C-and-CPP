#include <stdio.h>
#include <stdlib.h> // Correct! Needed for malloc and free

int main() { // Standard C uses 'int main'
    int length;

    printf("How many integers do you want to store: ");
    scanf("%d", &length);

    // NOW we allocate the exact amount needed
    int *arr = malloc(length * sizeof(int));

    // Safety Check: Always check if malloc failed (rare, but good practice)
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    for (int i = 0; i < length; i++) {
        printf("Enter the [%d] Number: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < length; i++) {
        printf("The value at index [%d] is: %d\n", i, arr[i]);
    }

    free(arr); // Correct! Memory is returned to the OS
    return 0;
}

