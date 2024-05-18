#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, c = 0;
    int res = scanf("%1d%1d%1d", &a, &b, &c);  
    printf("res = %d: %d%d%d: a = %d, b = %d, c = %d\n", res, a, b, c, a, b, c);

    return 0;
}