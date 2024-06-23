/* найдём сумму квадратов целых чисел от 1 до n с помощью цикла for */
#include <stdio.h>

int main(void)
{
    /* Объявление переменных */
    int n, s;

    scanf("%d", &n);

    /* Цикл с предусловием for */
    for (s = 0; n > 0; --n)
        s += n * n;

    printf("s = %d\n", s);

    return 0;
}