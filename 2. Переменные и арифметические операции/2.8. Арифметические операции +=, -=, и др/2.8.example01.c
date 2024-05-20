#include <stdio.h>

int main(void)
{
    int count = 1;
    double var_d = 10.0;
    short p = 2;

    count -= 3 - 5;
    var_d /= 3.0 + p;
    p *= 20 - 5;

    printf("count = %d, var_d = %.1lf, p = %d\n", count, var_d, p);

    return 0;
}