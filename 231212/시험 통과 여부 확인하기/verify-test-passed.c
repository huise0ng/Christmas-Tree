#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);

    if(a>=80){
        printf("pass");
    }
    else {
        int b = 80-a;
        printf("%d more score",b);
    }
    return 0;
}