#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d",&a,&b);

    int c = a>b ? a:b; // a>b가 일치하면 a실행 아니라면 b
    printf("%d",c);
    return 0;
}