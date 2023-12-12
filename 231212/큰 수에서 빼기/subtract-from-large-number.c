#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d",&a,&b);

    if(a>b){
        int c = a-b;
        printf("%d",c);
    }
    else if(b>a){
        int c = b-a;
        printf("%d",c);
    }
    return 0;
}