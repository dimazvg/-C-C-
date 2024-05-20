/* ограничение числа в диапазоне [0, range-1], где range == 10 */
#include <stdio.h>

int main(void)
{
    int digit;
    scanf("%d", &digit);

    int range = 10;  // [0, range-1]
    int res = digit % range;

    printf("res = %d\n", res);

    return 0;
}