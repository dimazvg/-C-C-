/* Подвиг 5. Напишите программу, которая считывает из входного потока stdin вещественное число. 
Если его целая часть кратна 5, то в консоль следует вывести число 1, иначе - число 0.
P.S. Программу реализовать без применения условных операторов.
*/
#include <stdio.h>

int main(void)
{
    double d;
    scanf("%lf", &d);
    
    printf("%d", ((long long)d % 5 == 0));
 
    return 0;
}