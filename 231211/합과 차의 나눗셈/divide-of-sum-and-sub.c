#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    double result;

    // 두 정수 a, b 입력받기
    scanf("%d %d", &a, &b);

    // a + b를 a - b로 나눈 값을 계산
    result = (double)(a + b) / (a - b);

    // 결과를 소수점 둘째 자리까지 출력
    printf("%.2lf\n", round(result * 100) / 100);

    return 0;
}