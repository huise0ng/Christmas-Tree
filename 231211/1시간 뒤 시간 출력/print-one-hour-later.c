#include <stdio.h>

int main() {
    // 변수 선언 및 입력
    int h, m;
    scanf("%d:%d", &h, &m);
    
    // 출력
    printf("%d:%d", h + 1, m);
    return 0;
}