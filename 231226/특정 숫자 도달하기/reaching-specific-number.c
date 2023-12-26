#include <stdio.h>

int main() {
    int arr[10];
    int a = 0;
    int b = 0;

    for(int i = 0; i<10; i++){
        scanf("%d", &arr[10]);

    }
    for(int i = 0; i < 10; i++) {
        if(arr[i] >= 250)
            break;
        a += arr[i];
        b++;
    }


    double avg = (double)a/b;

    printf("%d %1lf", a,b);
    
    return 0;
}