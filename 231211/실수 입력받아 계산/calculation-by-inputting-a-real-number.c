#include <stdio.h>

int main() {
    double a, b;
    scanf("%lf\n%lf",&a,&b);
    double c = a+b;
    printf("%.2lf",c);
    return 0;
}