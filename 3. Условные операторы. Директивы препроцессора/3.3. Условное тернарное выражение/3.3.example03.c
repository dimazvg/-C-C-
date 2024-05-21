#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int max = (a > b) ? ( (a > c) ? a : c ) : (b > c) ?  b : c;  // ! плохо понимаемый и плохо читаемый код

    printf("max = %d\n", max);

    return 0;
}