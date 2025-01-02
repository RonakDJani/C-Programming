#include <stdio.h>
#include <conio.h>

int mul(int x, int y);

void main()
{
    int a, b, c;

    a = 5;
    b = 10;
    c = mul(a, b);

    printf("Multiplication of %d and %d is %d", a, b, c);
    getch();
}

int mul(int x, int y)
{
    int z;

    z = x * y;

    return(z);
}