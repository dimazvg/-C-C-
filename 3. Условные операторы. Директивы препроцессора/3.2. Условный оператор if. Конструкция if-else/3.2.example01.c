#include <stdio.h>

int main(void)
{
    int x;
    if (scanf("%d", &x) != 1) {
        printf("Error input");
        return 0;
    }

    if (x < 0) x = -x;

    printf("x = %d\n", x);

    return 0;
}