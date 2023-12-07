#include <stdio.h>

int main() {
    char input[10];
    
    scanf("%c %c %c %c %c %c %c %c %c %c", &input[0], &input[1], &input[2], &input[3], &input[4], &input[5], &input[6], &input[7], &input[8], &input[9]);

    printf("%c%c%c%c%c%c%c%c%c%c\n", input[9], input[8], input[7], input[6], input[5], input[4], input[3], input[2], input[1], input[0]);
    
    return 0;
}