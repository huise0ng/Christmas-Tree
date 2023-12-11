#include <stdio.h>

int main() {
    // 전화번호 입력 받기
    char phoneNumber[14];
    scanf("%s", phoneNumber);

    // 입력 받은 전화번호의 앞 4자리와 뒤 4자리를 바꾸기
    char temp;
    temp = phoneNumber[3];
    phoneNumber[3] = phoneNumber[8];
    phoneNumber[8] = temp;

    temp = phoneNumber[4];
    phoneNumber[4] = phoneNumber[9];
    phoneNumber[9] = temp;

    // 결과 출력
    printf("%s\n", phoneNumber);

    return 0;
}