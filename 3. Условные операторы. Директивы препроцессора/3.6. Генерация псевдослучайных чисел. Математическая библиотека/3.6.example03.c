#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void)
{
    srand(time(NULL));
    
    int range = 10;

    // генерация целых чисел в диапазоне
    int r_1 = rand() % range;       // [0; range]
    int r_2 = rand() % range - 5;   // [-5; range-5]
    int r_3 = rand() + rand();      // увеличиваем диапазон генерации в 2 раза

    // генерация вещественного числа в диапазоне [0; 1]
    double range_double = (double)rand() / (double)RAND_MAX;
 
    printf("%d, %d, %d, %g\n", r_1, r_2, r_3, range_double);
 
    return 0;
}