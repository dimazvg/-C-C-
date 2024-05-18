#include <stdio.h>

int main(void)
{
    int a = 0, b = 0;
    int res = scanf("%d,%d", &a, &b);
    printf("res = %d: a = %d, b = %d\n", res, a, b);

    return 0;
}