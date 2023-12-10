#include <stdio.h>
#include <math.h>

int main() {
    char c;
    double a, b;

    // 문자 c 입력 받기
    scanf("%c", &c);

    // 실수 a, b 입력 받기
    scanf("%lf", &a);
    scanf("%lf", &b);

    // 문자 c 출력
    printf("%c\n", c);

    // 반올림한 실수 a 출력
    printf("%.2lf\n", round(a * 100) / 100);

    // 반올림한 실수 b 출력
    printf("%.2lf\n", round(b * 100) / 100);

    return 0;
}