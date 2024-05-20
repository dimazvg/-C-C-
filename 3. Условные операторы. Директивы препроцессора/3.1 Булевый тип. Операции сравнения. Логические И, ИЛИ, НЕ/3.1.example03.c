/* проверим, принадлежит ли число double y отрезку [-2, 5] */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    double y = 1.86;
    //scanf("%lf", &y);

    bool is_range = y >= -2 && y <= 5;

    printf("%d\n", is_range);

    return 0;
}