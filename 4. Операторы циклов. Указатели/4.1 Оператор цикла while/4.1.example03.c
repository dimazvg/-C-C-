/* найдём сумму квадратов целых чисел от 1 до n с помощью цикла while 
добавили ограничение на количество итераций цикла с помощью дополнительного условия и дополнительной переменной-счётчика
*/
#include <stdio.h>

int main(void)
{
    int n;
    int s = 0;

    if (scanf("%d", &n) != 1) {
        printf("Error input");
        return 0;
    }

    int i = 0;
    while (++i <= n && i <= 10)
        s += i * i;

    printf("s = %d\n", s);

    return 0;
}