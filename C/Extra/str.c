#include <stdio.h>

struct str
{
    char name [50];
    int marks[3];
};

int main () {
    struct str s1;
    struct str s2;
    printf("Enter the values for the first student\n");
    fgets(s1.name,sizeof(s1.name),stdin);
    for (int i=0;i<3;i++){scanf("%d",&s1.marks[i]);}
    scanf("%*c"); // consume the newline after scanf

    printf("Enter the values for the second student\n");
    fgets(s2.name,sizeof(s2.name),stdin);
    for (int i =0; i <3;i++){scanf("%d",&s2.marks[i]);}

    return 0;
}
