#include <stdio.h>
 
int main(void)
{
    // операция ~ NOT НЕ
    unsigned char var = 153;  //двоичная запись 10011001
    unsigned char not_v = ~var; //результат:    01100110 (число 102)
    printf("~ operation\n");
    printf("~%d == %d\n", var, not_v);
    printf("\n");

    // операция & AND И
    unsigned char flags = 5;  //двоичная запись 00000101
    unsigned char mask = 4;   //двоичная запись 00000100
    unsigned char res = flags & mask;
    printf("& operation\n");
    printf("flags & mask == %hhu & %hhu == %d\n", flags, mask, res);
    printf("\n");

    // операция | OR ИЛИ
    printf("| operation\n");
    flags = 8;  // двоичная запись 00001000
    mask = 5;   // двоичная запись 00000101
                // flask | mask == 00001101 (число 13)
    res = flags | mask;  // двоичная запись 00001101 (число 13)
    printf("flags | mask == %hhu | %hhu == %d\n", flags, mask, res);
    printf("\n");

    // операция ^  XOR  ИСКЛЮЧАЮЩЕЕ ИЛИ
    printf("^ operation\n");
    flags = 9;          // двоичная запись 00001001
    mask = 1;           // двоичная запись 00000001
    res = flags ^ mask; // двоичная запись 00001000 (число 8)
    printf("res = flags ^ mask == %hhu ^ %hhu == %d\n", flags, mask, res);
    //res ^= mask;     //двоичная запись 00001001 (число 9)
    printf("res = res ^ mask == %hhu ^ %hhu == %d == flags\n", res, mask, res ^ mask);
    printf("\n");

    // операция >> - битовый сдвиг вправо
    printf(">> operation\n");
    unsigned char x = 40;                   // 00101000
    printf("x = %d\n", x); 
    x = x >> 1;                       // 00010100 (число 20)
    printf("x = x >> 1 = %d\n", x);
    x = x >> 2;                       // 00000101 (число 5)
    printf("x = x >> 2 = %d\n", x); 
    x = x >> 1;                       // 00000010 (число 2)
    printf("x = x >> 1 = %d\n", x);
    x = x >> 1;                       // 00000001 (число 1)
    printf("x = x >> 1 = %d\n", x);
    printf("\n");
 
    // операция << - битовый сдвиг влево
    printf("<< operation\n");
    x = 1;                            // 00000001 (число 1)
    printf("x = %d\n", x);
    x = x << 1;                       // 00000010 (число 2)
    printf("x = x << 1 = %d\n", x);
    x = x << 2;                       // 00001000 (число 8)
    printf("x = x << 2 = %d\n", x);


    return 0;
}