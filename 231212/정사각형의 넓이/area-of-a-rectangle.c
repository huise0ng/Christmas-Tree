#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int b = a*a;
    printf("%d",b);

    if(a<=5){
        printf("tiny");
    }
    return 0;
}