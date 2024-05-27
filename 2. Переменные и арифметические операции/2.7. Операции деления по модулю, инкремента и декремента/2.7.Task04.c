/* Подвиг 4. Необходимо продолжить программу, которая складывает время, указанное в часах, минутах и секундах. 
Исходное время хранится в переменных time_h, time_m, time_s, а добавляемое - в переменных h, m, s. 
Гарантируется, что сумма времен не превышает одни сутки. Вывести полученное суммарное время в консоль в формате:
hh:mm:ss
Например:
12:05:09
(обратите внимание на наличие незначащих нулей при выводе чисел меньше 10).
*/
#include <stdio.h>

int main(void)
{
    unsigned short time_h = 10; // часы
    unsigned short time_m = 33; // минуты
    unsigned short time_s = 5; // секунды

    unsigned short h, m, s; // добавляемое время: h - часы; m - минуты; s - секунды
    scanf("%hu; %hu; %hu", &h, &m, &s);

    // здесь продолжайте программу
    unsigned int time_total_s = time_h * 3600 + time_m * 60 + time_s;
    time_total_s = time_total_s + h * 3600 + m * 60 + s;
    s = time_total_s % 60;
    m = (time_total_s / 60) % 60;
    h = time_total_s / 3600;
    
    printf("%02hu:%02hu:%02hu", h, m, s);

    return 0;
}