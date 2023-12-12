#include <stdio.h>

int main() {
    // 전화번호 입력 받기
    char phone_number[15]; // 끝에 null 문자('\0')를 저장할 공간을 추가
    scanf("%s", phone_number);

    // 끝에 있는 '-'를 제거하여 앞 4자리와 뒤 4자리를 바꾸어 출력
    phone_number[13] = '\0'; // 끝에 있는 '-'를 null 문자로 대체
    printf("010-%c%c%c%c-%c%c%c%c\n", phone_number[8], phone_number[9], phone_number[10], phone_number[11], phone_number[4], phone_number[5], phone_number[6], phone_number[7]);

    return 0;
}