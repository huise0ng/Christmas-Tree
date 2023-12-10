#include <stdio.h>

int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    b = a;
    c = b;
    a = c;
    printf("%d\n%d\n%d",a,b,c);
    return 0;
}