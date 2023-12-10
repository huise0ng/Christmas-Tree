#include <stdio.h>

int main() {
    int hour, minute;

    scanf("%d:%d", &hour, &minute);

    hour = (hour + 1) % 24;

    printf("%d:%02d\n", hour, minute);

    return 0;
}