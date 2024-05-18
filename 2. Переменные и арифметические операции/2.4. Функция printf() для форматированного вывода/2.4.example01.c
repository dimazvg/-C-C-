#include <stdio.h>

int main()
{
    short var_h = 100;
    int var_i = 1024;
    long double var_ld = 0.5;

    printf("var_h = %d, var_i = %d, var_ld = %Lf\n", var_h, var_i, var_ld);

    return 0;
}