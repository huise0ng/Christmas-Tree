#include <stdio.h>

int main() {
    // 전화번호 입력 받기
    char phone_number[15];
    scanf("%s", phone_number);

    // 끝에 있는 '-'를 제거하여 앞 4자리와 뒤 4자리를 바꾸어 출력
    int len = strlen(phone_number);
    if (phone_number[len - 1] == '-') {
        phone_number[len - 1] = '\0';
        len--;
    }
    
    printf("010-%c%c%c%c-%c%c%c%c\n", phone_number[len - 4], phone_number[len - 3], phone_number[len - 2], phone_number[len - 1],
                                       phone_number[len - 8], phone_number[len - 7], phone_number[len - 6], phone_number[len - 5]);

    return 0;
}