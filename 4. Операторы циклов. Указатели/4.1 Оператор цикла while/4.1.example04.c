/* считываем числа пока пользователь не введёт 0, найдём сумму чётных чисел среди введённых пользователем чисел */
#include <stdio.h>

int main(void)
{
    int s = 0;
    int x;

    while (scanf("%d", &x) == 1 && x != 0)
        if (x % 2 == 0) s += x;

    printf("s = %d\n", s);

    return 0;
}