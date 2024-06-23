/* Подвиг 10 (на повторение). Напишите программу, которая читает из входного потока натуральное число n. 
На его основе нужно сформировать другое число m, в котором цифры числа n будут идти в обратном порядке. 
Например, при n = 235, получаем m = 532. Или, при n = 1, получаем m = 1.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.2.10

Sample Input:
    4235
Sample Output:
    5324
*/
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    
    int res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    
    printf("%d", res);
    
    return 0;
}