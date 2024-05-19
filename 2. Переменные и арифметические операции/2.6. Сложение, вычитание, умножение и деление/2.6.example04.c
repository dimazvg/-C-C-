#include <stdio.h>

int main(void)
{
    short a = -5, b = 7, c = 4;
    double D = b * b - 4 * a * c;
    printf("D = %.2lf\n", D);

    double res_1 = 5 / (3 * 2);
    int res_2 = 2 * (b + c);

    printf("%.2lf %d\n", res_1, res_2);

    return 0;
}