/* Подвиг 4. Напишите программу, которая читает из входного потока натуральное число n (целое, положительное). 
Вычислите с помощью цикла while сумму ряда:
            S = 1 / 1^2 + 1 / 2^2 + 1 / 3^2 + ... + 1 / n^2
Выведите результат в консоль в виде вещественного числа с точностью до тысячных.
Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.1.4
Sample Input:
    8
Sample Output:
    1.527
*/
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    
    double S = 0.0;
    int i = 1;
    while (i <= n) {
        S += 1.0 / (i * i);
        i++;
    }
    
    printf("%.3lf", S);
    
    return 0;   
}