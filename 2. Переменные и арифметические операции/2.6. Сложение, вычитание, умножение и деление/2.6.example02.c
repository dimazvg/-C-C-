#include <stdio.h>

int main(void)
{
    short a = -5;
    int b = 10;
    float c = 5.4f;
    double d = -6.5;

    int res_1 = 7 / 2;  // 3
    double res_2 = -9 / 2;  // -4.0
    float res_3 = a / c;  // -0.9259
    double res_4 = d / b;  // -0.65

    printf("%d %.2lf %.6f %.2lf\n", res_1, res_2, res_3, res_4);

    return 0;
}