#include <stdio.h>

const int max_size = 5;

#define SIZE    1
#define IS_CPP

int main(void)
{
/*#ifdef(IS_CPP)
    printf("1\n");
#endif
*/

#if !defined(SIZE)
    printf("2\n");
#endif

#if defined(SIZE)
    printf("3\n");
#endif

#if(SIZE == 1)
    printf("4\n");
#endif

#ifdef IS_CPP
    printf("5\n");
#endif

#if SIZE > 10 - 8
    printf("6\n");
#endif

#if max_size > 1
    printf("7\n");
#endif

#ifndef IS_CPP
    printf("8\n");
#endif

#if SIZE >= 0 && SIZE <= 10
    printf("9\n");
#endif

#if SIZE > 0
    printf("10\n");
#endif

/*#if IS_CPP
    printf("11\n");
#endif
*/

    return 0;
}