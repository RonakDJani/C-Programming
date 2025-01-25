#include <stdio.h>
#include <conio.h>

void main()
{
    float a, b, c, x, y, z;

    a = 9;
    b = 12;
    c = 3;

    x = a - b / 3 + c * 2 - 1;
    y = a - b / (3 + c) * (2 - 1);
    z = a - (b / (3 + c) * 2) - 1;

    printf("a - b / 3 + c * 2 - 1: %f\n", x);
    printf("a - b (3 + c) * (2 - 1): %f\n", y);
    printf("a - (b / (3 + c) * 2) - 1: %f", z);
    getch();
}