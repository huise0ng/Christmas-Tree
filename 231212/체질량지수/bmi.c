#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d",&a,&b);
    int c = b*b;
    if(a/c>=25){
        printf("Obesity");
    }
    return 0;
}