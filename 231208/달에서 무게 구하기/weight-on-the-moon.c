#include <stdio.h>

int main() {
    double 추의_무게 = 13;
    double 달에서의_중력_비율 = 0.165;

    double 결과 = 추의_무게 * 달에서의_중력_비율;
    printf("%.6lf * %.6lf = %.6lf\n", 추의_무게, 달에서의_중력_비율, 결과);

    return 0;
}