/* Подвиг 3. Продолжите программу, в которой нужно определить макро-функцию с именем GET_MAX, 
возвращающую максимальное из двух чисел. 
Вызовите в функции main макрос GET_MAX следующим образом:
    double res = GET_MAX(val_1 + 1, val_2 - 1) / (val_1 + val_2);
Выведите в консоль значение переменной res с точностью до сотых.
*/
#include <stdio.h>

// здесь объявляйте макро-функцию
#define GET_MAX(X, Y)    (((X) > (Y)) ? (X) : (Y))

int main(void)
{
    double val_1, val_2;
    if(scanf("%lf; %lf", &val_1, &val_2) != 2) {
        printf("Input error");
        return 0;
    }

    // здесь продолжайте программу
    double res = GET_MAX(val_1 + 1, val_2 - 1) / (val_1 + val_2);
    
    printf("%.2lf", res);

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}