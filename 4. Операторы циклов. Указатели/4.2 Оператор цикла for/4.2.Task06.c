/* Подвиг 6. Напишите программу, которая читает из входного потока два целых числа n, m, записанных в одну строчку через пробел, причем n < m. 
Выведите в консоль в одну строчку через пробел все четные числа в диапазоне [n; m], используя цикл for.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.2.6

Sample Input:
    -3 20
Sample Output:
    -2 0 2 4 6 8 10 12 14 16 18 20
*/
#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d%d", &n, &m);

    if (n % 2 != 0) n++;
    for (int i = n; i <= m; i += 2)
        printf("%d ", i);

/*
    for (int i = n; i <= m; i++)
        if (i % 2 == 0)
            printf("%d ", i);
*/

    return 0;
}