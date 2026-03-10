#include <stdio.h>

void main () {

	int a = 20;
	int *p = &a;
	printf("%d %p %p %d\n",a,&a,p,*p);

}
