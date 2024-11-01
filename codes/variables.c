#include <stdio.h>

int main()
{
    // template: <type> <name> = <value>;
    // int a = 0;
    // char b = 'R';
    // float c = 5.0f;

    // printf("a = %d\n", a);
    // printf("b = %c\n", b);
    // printf("c = %f\n", c);
    // printf("---\n");
    // printf("a = %d b = %c c = %f\n", a, b, c);

    // math
    // int n1 = 10;
    // printf("n1 = %d\n", n1);
    // n1 = n1 + 5;
    // printf("n1 + 5 = %d\n", n1);
    // n1 = n1 - 10;
    // printf("n1 - 10 = %d\n", n1);


    // int n2 = 6;
    // int n3 = 12;
    // printf("n2 = %d\nn3 = %d\n", n2, n3);
    // int n4 = n2 + n3;
    // printf("n2 + n3 = %d\n", n4);   // 18
    // n4 = n2 - n3;
    // printf("n2 - n3 = %d\n", n4);   // -6
    // n4 = n2 * n3;
    // printf("n2 * n3 = %d\n", n4);   // 72
    // n4 = n3 / n2;
    // printf("n3 / n2 = %d\n", n4);   // 2
    
    
    // n4 = n2 / n3;
    // printf("n2 / n3 = %d\n", n4);   // 0
    // float f = n2 / n3;
    // printf("n2 / n3 = %f\n", f);    // 0.00000
    // f = (float)n2 / n3;
    // printf("n2 / n3 = %f\n", f);    // 0.50000
    // printf("n2 / n3 = %.2f\n", f);  // 0.50

    // n2++;
    // printf("n2++ = %d\n", n2);  // 7
    // n3--;
    // printf("n3-- = %d\n", n3);  // 11


    printf("0 %c 3 = %d\n", '%', 0 % 3);
    printf("1 %c 3 = %d\n", '%', 1 % 3);
    printf("2 %c 3 = %d\n", '%', 2 % 3);
    printf("3 %c 3 = %d\n", '%', 3 % 3);
    printf("4 %c 3 = %d\n", '%', 4 % 3);
    printf("5 %c 3 = %d\n", '%', 5 % 3);
    printf("6 %c 3 = %d\n", '%', 6 % 3);

    int a1 = 3;
    int b1 = 8;

    printf("%d %c %d = %d\n", b1, '%', a1, b1 % a1);

    int c1 = b1 / a1;
    c1 = c1 * a1;
    c1 = b1 - c1;
    printf("%d %c %d = %d\n", b1, '%', a1, c1);
    // int c2 = b1 - ((b1 / a1) * a1);
    // printf("%d %c %d = %d\n", b1, '%', a1, c2);


    return 0;
}
