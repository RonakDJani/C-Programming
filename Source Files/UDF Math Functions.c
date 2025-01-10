#include <stdio.h>
#include <conio.h>

int add(int x, int y);
int sub(int x, int y);

void main()
{
    int a = 20, b = 10, c;

    c = add(a, b);
    printf("%d + %d = %d\n", a, b, c);
    
    c = sub(a, b);
    printf("%d - %d = %d", a, b, c);
    getch();
}

int add(int x, int y)
{
    int z;

    z = x + y;

    return(z);
}

int sub(int x, int y)
{
    int z;

    z = x - y;

    return(z);
}