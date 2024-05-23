#include <stdio.h>

// пункты меню - в виде констант-макросов
#define MENU_TRANSL 1
#define MENU_ADD    2
#define MENU_EXIT   3
// ещё примеры макросов
#define MENU_FMT    "You have selected menu item %d\n"
#define FIRST_LETTER    'a'

int main(void)
{
    int item;
 
    scanf("%d", &item);

    switch(item) {
    case MENU_TRANSL:
        printf("Translate words\n");
        break;
    case MENU_ADD:
        printf("Add words\n");
        break;
    case MENU_EXIT:
        printf("Exit\n");
        break;
    default:
        printf("Incorrect menu item\n");
    }

    return 0;
}