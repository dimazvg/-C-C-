/* вычислим факториал числа с помощью цикла for 
    5! = 1 * 2 * 3 * 4 * 5 = 120
*/
#include <stdio.h>

int main(void)
{
    int n = 5, p = 1;

    for (int i = 1; i <= n; ++i)
        p *= i;

    printf("p = %d\n", p);

    return 0;
}