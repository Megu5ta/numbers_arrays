#include <stdio.h>

int main()
{
    while (0)
    {
        printf("While итерация\n");
    }

    do
    {
        printf("do-while итерация\n");
    } while (0);


    // dummy if
    int i = 0;
    if (i < 3)
    {
        printf("if - сейчас i = %d\n", i);
        i++;
    }
    if (i < 3)
    {
        printf("if - сейчас i = %d\n", i);
        i++;
    }
    if (i < 3)
    {
        printf("if - сейчас i = %d\n", i);
        i++;
    }
    if (i < 3)
    {
        printf("if - сейчас i = %d\n", i);
        i++;
    }
    if (i < 3)
    {
        printf("if - сейчас i = %d\n", i);
        i++;
    }
    if (i < 3)
    {
        printf("if - сейчас i = %d\n", i);
        i++;
    }
    if (i < 3)
    {
        printf("if - сейчас i = %d\n", i);
        i++;
    }

    // while for exact amount of iterations
    i = 0;
    while (i < 3)
    {
        printf("while итерация, сейчас i = %d\n", i);
        i++;
    }

    for (int i=0; i<3; i++)
    {
        printf("for итерация, сейчас i = %d\n", i);
    }
    
    return 0;
}