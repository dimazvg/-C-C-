#include <stdio.h>

int main(void)
{
    short a = -5;
    int b = 10;
    float c = 5.4f;
    double d = -6.5;

    int res_1 = a + b;
    short res_2 = 100 - b;
    float res_3 = 5.4 - c;
    double res_4 = d * 4;

    printf("%d %hd %f %.2lf\n", res_1, res_2, res_3, res_4);

    return 0;
}