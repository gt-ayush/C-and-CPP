#include <stdio.h>
static int c= 90;
void fun () {
    int a =10;
    int b =10;

    printf("%d %d %d\n",a,b,c);
    a++;
    b++;
    c++;
}
void main() {

    fun();
    fun();
    fun();
    c++;
    printf("%d\n",c);
    
}