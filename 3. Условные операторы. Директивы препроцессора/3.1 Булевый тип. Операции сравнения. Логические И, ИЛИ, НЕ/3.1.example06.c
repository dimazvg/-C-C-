/* пример на приоритет операций сравнения */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int x = 15;
    //scanf("%d", &x);
    bool is_correct = (x % 2 == 0 || x % 3 == 0) && x > 5;
    printf("%d\n", is_correct);

    bool fl_digit = x != 0 && 10 / x > 1;  // деление на 0 не произойдёт

    printf("%d\n", fl_digit);

    return 0;
}