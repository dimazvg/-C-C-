/* Подвиг 11. Напишите программу, которая считывает из входного потока два целых числа a, b, записанных в одну строку через пробел. 
Поменяйте местами значения переменных a и b так, чтобы a принимало значение b, а b принимало значение a. 
Программу реализовать с добавлением еще одной целочисленной переменной. 
Выведите значения переменных a и b в консоль в одну строчку через пробел.
Sample Input:
    8 11
Sample Output:
    11 8
*/
#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);

    return 0;
}