/* пример на приоритет операций сравнения */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int x = 5;
    //scanf("%d", &x);
    bool is_correct = x % 2 == 0 || x % 3 == 0 && x > 5;

    printf("%d\n", is_correct);

    return 0;
}