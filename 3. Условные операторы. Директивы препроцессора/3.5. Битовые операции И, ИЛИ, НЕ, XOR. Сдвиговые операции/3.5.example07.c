/* битовые сдвиги справо и влево (>> и <<) для целых чисел со знаком */
#include <stdio.h>
 
int main(void)
{
    signed char x = -128;              // 1000 0000
    printf("x = %d\n", x);
 
    x = x << 1;                  // 0000 0000
    printf("x << 1 = %d\n", x);
 
    x = -128;                          // 1000 0000
    printf("x = %d\n", x);
    x = x >> 1;                  // 1100 0000 (-64)
    printf("x >> 1 = %d\n", x);
 
    return 0;
}