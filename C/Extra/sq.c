#include <stdio.h>

void max(int *a,int *b, int *c,int *r) {

	*r = *a>*b ? ((*a>*c)? *a : *c) : ((*b>*c)?*b:*c);


}

void main () {

	int x= 5;
	int y= 6;
	int z= 3;
	int r;
	max(&x,&y,&z,&r);
	printf("Max : %d" ,r);
}
