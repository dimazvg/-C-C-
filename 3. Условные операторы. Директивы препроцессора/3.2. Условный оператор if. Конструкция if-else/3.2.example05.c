#include <stdio.h>

int main(void)
{
    int x;
    if (scanf("%d", &x) != 1) {
        printf("Error input");
        return 0;
    }

    if (x < 10) 
        printf("x int [0; 9]\n");
    else if (x < 100)
        printf("x int [10; 99]\n");
    else if (x < 1000)
        printf("x int [100; 999]\n");
    else
        printf("x > 999\n");

    return 0;
}