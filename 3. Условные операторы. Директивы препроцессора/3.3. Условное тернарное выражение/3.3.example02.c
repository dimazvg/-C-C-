#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);

    printf("x is %s digit\n", (x % 2 == 0) ? "even" : "odd");

    return 0;
}