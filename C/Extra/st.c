#include <stdio.h>
struct st
{
    char name[50];
    char dig[50];
    int emp_id;
    float sal;
};


void main () {
    struct st el={"Jhon Lest","Renega",1298,169890.00};
    
printf("%d\n",sizeof(el));
printf("%s %s %d %.2f\n",el.name,el.dig,el.emp_id,el.sal);

struct st e2;
fgets(e2.name,sizeof(e2.name),stdin);

printf("%s",e2.name);

}