#include <stdio.h>

int main()
{
    int var = 5;
    /*
        ... Много кода
    */

    // if
    if (1)
    {
        printf("Иф выполнился\n");
    }

    if (0)
    {
        printf("Иф выполнился\n");
    }
    
    // if-else
    if (0)
    {
        printf("Иф выполнился\n");
    }
    else
    {
        printf("Невыполнился\n");
    }


    // if-else if-else
    if (var > 0)
    {
        printf("Больше нуля\n");
    }
    else
    {
        printf("Меньше нуля\n");
    }

    if (var > 0)
    {
        printf("Больше нуля\n");
    }
    else if (var < 0)
    {
        printf("Меньше нуля\n");
    }

    if (var > 0)
    {
        printf("Больше нуля\n");
    }
    else if (var < 0)
    {
        printf("Меньше нуля\n");
    }
    else
    {
        printf("Ноль\n");
    }



    // && vs ||
    int a1 = -5;
    int b1 = -10;
    printf("&&\n");
    if (a1 > 0 && b1 > 0)
    {
        printf("Оба больше нуля\n");
    }
    else if (a1 < 0)
    {
        printf("a1 Меньше нуля\n");
    }
    else if (b1 < 0)
    {
        printf("b1 меньше нуля\n");
    }
    else
    {
        printf("Оба больше нуля\n");
    }

    printf("||\n");
    if (a1 > 0 || b1 > 0)
    {
        printf("Как минимум одно из двух чисел больше нуля\n");
    }
    else
    {
        printf("Оба меньше нуля\n");
    }
    return 0;
}
