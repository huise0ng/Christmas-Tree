#include <stdio.h>

int main() {
    double arr[10];
    double sum = 0;
    
    for(int i = 0; i < 8; i++){
        scanf("%lf",&arr[i]);

    }
    for(int i = 0; i < 8; i++){
        sum += arr[i];
    }
    double avg = sum / 8.0;
    printf("%.1lf",avg);
    return 0;
}