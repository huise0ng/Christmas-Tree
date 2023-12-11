#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    int d = a + b + c;
    int e = (a + b +c)/3;
    int f = d - 3;
    printf("%d\n%d\n%d",d,e,f);
    return 0;
}