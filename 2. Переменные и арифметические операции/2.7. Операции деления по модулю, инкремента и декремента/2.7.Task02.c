/* Подвиг 2. Продолжите программу, в которой выполняется чтение целочисленного неотрицательного значения в переменную angle (угол). 
Необходимо представить угол angle в диапазоне [0; 359]. То есть, все значения в 360 вычесть из переменной angle.
Например:
    angle = 540; 540 - 360 = 180;
    angle = 800; 800 - 2*360 = 80.
Результат вывести в консоль в виде одного полученного целого числа.
Sample Input:
    600
Sample Output:
    240
*/
#include <stdio.h>

int main(void)
{
    int angle;
    scanf("%d", &angle);

    // здесь продолжайте программу
    angle = angle % 360;
    printf("%d", angle);
    
    return 0;
}