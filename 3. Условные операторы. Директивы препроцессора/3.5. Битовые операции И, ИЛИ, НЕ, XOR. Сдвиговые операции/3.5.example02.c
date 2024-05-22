/* проверяем маской включение n-го бита числа */
#include <stdio.h>
 
int main(void)
{
    unsigned char flags = 5;  //двоичная запись 00000101
    unsigned char mask = 4;   //двоичная запись 00000100
 
    if((flags & mask) == mask)
        printf("bit 2 is on\n");
    else
        printf("bit 2 is off\n");
 
    return 0;
}