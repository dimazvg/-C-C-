#include <stdio.h>

int main()
{
    short var_i = -1283;
    double var_d = 54.34675;

    printf("[%10d]\n", var_i);
    printf("[%10f]\n", var_d);
    printf("\n");
    printf("[%-10d]\n", var_i);
    printf("[%-10f]\n", var_d);
    printf("\n");
    printf("[%-2d]\n", var_i);
    printf("[%-5f]\n", var_d);
    printf("\n");
    printf("[%12.7d]\n", var_i);
    printf("[%12.2f]\n", var_d);
    printf("\n");
    printf("[%.7d]\n", var_i);
    printf("[%.2f]\n", var_d);
    printf("\n");
    printf("[%#X]\n", var_i);
    printf("[%+.2f]\n", var_d);

    return 0;
}