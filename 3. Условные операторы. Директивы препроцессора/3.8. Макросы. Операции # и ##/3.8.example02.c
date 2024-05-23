#include <stdio.h>

#define SQ_PR(A, B)   ((A) * (B))
 
int main(void)
{
    int res = SQ_PR(2, 3);
    printf("SQ_PR(2, 3) = %d\n", res);
    int x = 2, y = 4;
    printf("x = %d, y = %d\n", x, y);
    res = SQ_PR(x + 2, y - 3);
    printf("SQ_PR(x + 2, y - 3) = %d\n", res);
 
    return 0;
}