/* операция инкремент ++ */
#include <stdio.h>

int main(void)
{
    int count = 0;
    printf("count = %d\n", count);
    count++;  // то же, что и count = count + 1;
    printf("count = %d\n\n", count);

    count = 0;
    int size = 5;
    printf("count = %d, size = %d\n", count, size);
    int current = count++;
    int width = ++size;
    printf("count = %d, size = %d, current = %d, width = %d\n", count, size, current, width);

    int p = 2 * size++;
    int r = 3 * --width;
    printf("p = %d, r = %d, size = %d, width = %d\n", p, r, size, width);

    return 0;
}