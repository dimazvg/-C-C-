#include <stdio.h>

int main(void)
{
    int res = 10 % 4;
    int res_2 = 10 - 10 / 4 * 4;

    int res_3 = 10 % -4;
    int res_4 = -10 % 4;
    int res_5 = -10 % -4;

    printf("%d %d %d %d %d\n", res, res_2, res_3, res_4, res_5);

    return 0;
}