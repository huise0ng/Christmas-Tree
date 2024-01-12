#include <stdio.h>

int main() {
    int nums[10];
    int count = 0; 
    int sum = 0;   
    int temp;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &temp);

        if (temp == 0) {
            break;
        }

        if (temp % 2 == 0) {
            count++;
            sum += temp;
        }
    }

    printf("%d %d\n", count, sum);
    return 0;
}