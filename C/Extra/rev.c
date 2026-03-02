#include <stdio.h>
int re =0;
int rev(int n) {
    if (n==0) return re;
    re =(re*10) + n%10;
    rev(n/10);
}
void main() {printf("%d",rev(209823));}