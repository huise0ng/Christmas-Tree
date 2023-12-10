#include <stdio.h>

int main() {
    // 초기 값 설정
    int a = 5, b = 6, c = 7;
    int temp;

    // 값 교환
    temp = a;
    a = c;
    c = b;
    b = temp;

    // 출력
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}