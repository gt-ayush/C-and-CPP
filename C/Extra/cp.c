#include <stdio.h>

void count (int a,int b,int *c){
	if (a==1) a++;

	for (int i = a; i<=b;i++) {
		int f =0;
		for (int j=2;j<= (i/2); j++) {
			if (i%j==0) {
				f=1;
				break;
				}
		}
		if (f==0) *c = *c + 1;
	}

}
void main () {
	int a,b,c=0;
	printf("Enter the start : ");
	scanf("%d",&a);
	printf("Enter the ending : ");
	scanf("%d",&b);
	count (a,b,&c);
	printf("Count : %d\n" ,c);
}
