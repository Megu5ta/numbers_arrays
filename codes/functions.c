#include <stdio.h>

void print_hello_world()
{
    printf("Hello World!\n");
}

void print_number(int n)
{
    printf("Printing number %d...\n", n);
}

int sum_of_two(int n1, int n2)
{
    return n1 + n2;
}

int custom_modulos(int b1, int a1)
{
    int c1 = b1 / a1;
    c1 = c1 * a1;
    c1 = b1 - c1;
    // print_number(c1);
    return c1;
}


int is_negative(int n)
{
    if (n < 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    print_hello_world();
    // print_number();
    print_number(5);
    int a = -15;
    print_number(a);
    int n = 18;
    print_number(n);

    // int result = sum_of_two();
    // int result = sum_of_two(5);
    int result = sum_of_two(5, 15);
    printf("%d\n", result);

    result = custom_modulos(8, 3);
    printf("%d\n", result);

    if (is_negative(-5))
    {
        printf("Number is negative\n");
    }
    else
    {
        printf("Number is not negative\n");
    }
    return 0;
}
