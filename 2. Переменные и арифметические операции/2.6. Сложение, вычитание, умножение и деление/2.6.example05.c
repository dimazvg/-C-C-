/* вычислим площадт треугольника по высоте и основанию */
#include <stdio.h>

int main(void)
{
    double height, a;

    int res = scanf("%lf %lf", &height, &a);
    if (res != 2) {
        printf("Error\n");
        return 0;
    }

    double sq = height * a / 2;

    printf("%.2lf\n", sq);

    return 0;
}