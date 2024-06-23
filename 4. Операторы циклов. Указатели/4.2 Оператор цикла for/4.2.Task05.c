/* Подвиг 5. Напишите программу, которая читает из входного потока натуральное число n. 
Необходимо вывести в консоль "линию" в виде n символов '='. 
Например, если вводится n = 5, то на выходе должны получить:
=====

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.2.5

Sample Input:
    23
Sample Output:
    =======================
*/
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        printf("%c", '=');

    return 0;
}