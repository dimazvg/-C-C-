#include <stdio.h>
 
#define FIVE    5
#define TEN     2 * FIVE
#define TEXT    "Text message in one line"
#define TEXT2   "Text message in \
two line"
#define PRINT_D  printf("digit = %d\n", digit)
#define FORMAT  "digit = %d\n"
 
int main(void)
{
    int digit = FIVE;
    PRINT_D;
    
    digit = TEN;
    printf(FORMAT, digit);
    printf(TEXT "\n");
    printf(TEXT2 "\n");
    
    return 0;
}