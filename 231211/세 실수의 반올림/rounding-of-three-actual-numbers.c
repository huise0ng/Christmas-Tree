#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    
    // 세 개의 실수 입력 받기
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    // 입력 받은 실수들을 반올림하여 출력
    printf("%.3lf\n", round(a * 1000) / 1000);
    printf("%.3lf\n", round(b * 1000) / 1000);
    printf("%.3lf\n", round(c * 1000) / 1000);

    return 0;
}