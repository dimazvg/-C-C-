/* "переключение" битов операцией XOR */
#include <stdio.h>
 
int main(void)
{
    unsigned char flags = 9;  //двоичная запись 00001001
    unsigned char mask = 1;   //двоичная запись 00000001
 
    flags = flags ^ mask;      //двоичная запись 00001000 (число 8)
 
    printf("flags = %d\n", flags);
 
    flags ^= mask;     //двоичная запись 00001001 (число 9)
    printf("flags = %d\n", flags);
 
    return 0;
}