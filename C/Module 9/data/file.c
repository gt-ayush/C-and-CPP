#include <stdio.h>

void main () {
    FILE *fp = fopen("data.txt","a");
    
    char name[50] ; 
    printf("Enter names (type '/' to quit):\n");
    while(1)
    {   printf("Name: ");
        scanf("%49s",name);

        if (name[0] == '/') {
            break;
        }

    fprintf(fp,"%s\n",name);
    
    printf("Successfully logged to file.\n");
    }
fclose(fp);
printf("File saved and closed.\n");
}