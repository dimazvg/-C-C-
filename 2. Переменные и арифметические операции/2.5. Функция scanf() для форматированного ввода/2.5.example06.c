/* данные: id - целоче беззнаковое, price - целое, weight - вещественное
ввод: id; price; weight
      10; 1000; 54.65
нужно пропустить id и прочитать price и weight для расчётов
*/
#include <stdio.h>

int main(void)
{
    unsigned int price = 0;
    double weigth = 0.0;

    // int res = scanf("%*llu; %u; %lf", &price, &weigth);  // проблемы в gbu/linux
    int res = scanf("%*u; %u; %lf", &price, &weigth);  // работает в gbu/linux
    printf("res = %d: price = %d, weight = %.2lf\n", res, price, weigth);

    return 0;
}