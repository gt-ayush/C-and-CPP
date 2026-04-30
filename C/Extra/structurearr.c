#include <stdio.h>

struct structurearr
{
    /* data */
    char name[50];
    int marks[3];

};

int main () {
    struct structurearr student[3];
    printf("Enter the values for the first student :\n");
    fgets(student[0].name,sizeof(student[0].name),stdin);
    for (int i=0;i<3;i++){scanf("%d",&student[0].marks[i]);}
    scanf("%*c"); // consume the newline after scanf

    printf("Enter the values for the second student : \n");
    fgets(student[1].name,sizeof(student[1].name),stdin);
    for (int i =0; i <3;i++){scanf("%d",&student[1].marks[i]);}
    // avg  both the students marks
    float avg = 0;
    for (int i =0; i <3;i++){
        avg += student[1].marks[i];
    }
    avg /= 3;
    printf("Average marks for the second student: %.2f\n", avg);
    return 0;
}