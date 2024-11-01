#include <stdio.h>



int main()
{
    int my_array[3] = {5, 15, 12};
    printf("%d\n", my_array[0]);
    printf("%d\n", my_array[1]);
    printf("%d\n", my_array[2]);

    int another_array[4];
    another_array[0] = 11;
    another_array[1] = 12;
    another_array[2] = 13;
    another_array[3] = 14;
    printf("%d\n", another_array[0]);
    printf("%d\n", another_array[1]);
    printf("%d\n", another_array[2]);
    printf("%d\n", another_array[3]);

    char char_array[3] = {'a', 'b', 'c'};
    printf("%c\n", char_array[0]);
    printf("%c\n", char_array[1]);
    printf("%c\n", char_array[2]);

    for (int i=0; i<4; i++)
    {
        printf("%d\n", i);
        printf("another_array[%d] = %d\n", i, another_array[i]);
    }

    return 0;
}