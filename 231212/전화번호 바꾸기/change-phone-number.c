#include <stdio.h>

int main() {
    // 전화번호 입력 받기
    char phone_number[14];
    scanf("%s", phone_number);

    // 앞 4자리와 뒤 4자리를 바꾸어 출력
    printf("010-%c%c%c%c-%c%c%c%c\n", phone_number[9], phone_number[10], phone_number[11], phone_number[12], phone_number[5], phone_number[6], phone_number[7], phone_number[8]);

    return 0;
}