/* Подвиг 5. Продолжите программу, которая должна вывести с помощью функции printf() все объявленные переменные 
(в порядке их объявления) в одну строчку через пробел. Вещественное число выведите с точностью до десятитысячных 
(4 знака после запятой).
*/
#include <stdio.h>

int main(void)
{
    unsigned height = 12345012;
    long long dist = 1234567890LL;
    long double weight = 45.7845;

    // здесь продолжайте программу
    printf("%u %lld %.4Lf", height, dist, weight);

    return 0;
}