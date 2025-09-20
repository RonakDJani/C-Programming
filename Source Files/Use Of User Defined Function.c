#include <stdio.h>

int mul(int j, int k);

int main()
{
    int a, b, c;

    a = 5;
    b = 10;
    c = mul(a, b);

    printf("Multiplication of %d and %d is %d", a, b, c);
    
    return 0;
}

int mul(int x, int y)
{
    int z;

    z = x * y;

    return z;
}