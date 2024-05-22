/* выключаем нужные биты числа с помощью маски и операции & */
#include <stdio.h>
 
int main(void)
{
    unsigned char flags = 13;  // двоичная запись 00001101
    unsigned char mask = 5;    // двоичная запись 00000101
                                         // ~mask 11111010
    flags = flags & ~mask;                     // 00001000
 
    printf("flags = %d\n", flags);  // двоичная запись 00001000 (число 8)
 
    return 0;
}