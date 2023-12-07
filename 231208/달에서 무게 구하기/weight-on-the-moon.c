#include <stdio.h>

int main() {
    double weightOnEarth = 13.0;
    double lunarGravity = 0.165;
    double weightOnMoon = weightOnEarth * lunarGravity;

    printf("%.6lf * %.6lf = %.6lf\n", weightOnEarth, lunarGravity, weightOnMoon);

    return 0;
}