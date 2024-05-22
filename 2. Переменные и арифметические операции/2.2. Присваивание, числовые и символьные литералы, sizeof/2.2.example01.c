#include <stdio.h>

int main(void)
{
    unsigned long long n_ull = 19000000000000000000; // превышает unsigned long long
    printf("%llu\n", n_ull);


    return 0;
}