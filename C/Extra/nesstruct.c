#include <stdio.h>

struct dob
{
    /* data */
    int day;
    int month;  
    int year;
};

struct student
{
    /* data */
    char name[50];
    int marks[3];
    struct dob date;
};

int main () {
    struct student s1;
    printf("Enter the name of the student :");
    fgets(s1.name,sizeof(s1.name),stdin);
    printf("Enter the marks of the student : ");
    for (int i=0;i<3;i++){scanf("%d",&s1.marks[i]);}
    scanf("%*c"); // consume the newline after scanf

    printf("Enter the date of birth of the student (day month year) : ");
    scanf("%d %d %d",&s1.date.day,&s1.date.month,&s1.date.year);

    printf("Name of the student : %s",s1.name);
    printf("Marks of the student : %d , %d , %d\n",s1.marks[0],s1.marks[1],s1.marks[2]);
    printf("Date of birth of the student : %d/%d/%d\n",s1.date.day,s1.date.month,s1.date.year);

    return 0;
}