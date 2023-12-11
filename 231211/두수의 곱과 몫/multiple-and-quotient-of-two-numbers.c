#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d",&a,&b);
    int c = a*b;
    int d = a / b;
    printf("%d * %d = %d\n",a,b,c);
    printf("%d / %d = %d",a,b,d);
    return 0;
}