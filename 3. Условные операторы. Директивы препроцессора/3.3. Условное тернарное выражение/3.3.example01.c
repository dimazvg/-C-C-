#include <stdio.h>

int main(void)
{
    double a = 7.5, b = -3.43;
    double max_ab;
/*
    if (a > b)
        max_ab = a;
    else
        max_ab = b;
*/
   max_ab = a > b ? a : b;

    printf("max_ab = %.2lf\n", max_ab);

    return 0;
}