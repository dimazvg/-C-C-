#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int digit;

    scanf("%d", &digit);

    bool even = digit % 2 == 0;

    printf("%d\n", even);

    return 0;
}