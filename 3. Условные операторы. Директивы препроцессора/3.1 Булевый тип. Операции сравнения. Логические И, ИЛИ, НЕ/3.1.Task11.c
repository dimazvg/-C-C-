/* Подвиг 11*. На плоскости размером rect_width x rect_height (ширина x высота) размещены непересекающиеся прямоугольники одинаковых размеров 
    w x h, следующих друг за другом, как показано на рисунке ниже.
        рисунок в файле Tasks.md
Необходимо продолжить программу, вычислив общее число прямоугольников не умещающихся целиком на плоскости. 
Результат вывести в консоль в виде одного целого числа.
P.S. Программу реализовать без применения условных операторов, только используя изученный материал.
*/
#include <stdio.h>

int main(void)
{
    int rect_width = 640, rect_height = 480;
    int w = 1, h = 1;
    scanf("%d; %d", &w, &h);

    // здесь продолжайте программу
    int count_height = (rect_height / h) * (rect_width % w != 0);
    int count_width = (rect_width / w) * (rect_height % h != 0);
    int count = count_height + count_width + (count_height != 0 && count_width != 0);
    
    printf("%d", count);

    return 0;
}