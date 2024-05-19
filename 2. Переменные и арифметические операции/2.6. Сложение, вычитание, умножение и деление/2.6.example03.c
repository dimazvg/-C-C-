#include <stdio.h>

int main(void)
{
    short a = -5;
    int b = 10;

    double res_1 = (double)a / b;
    double res_2 = 7.0 / 2.0;

    printf("%.2lf %.2lf\n", res_1, res_2);

    return 0;
}