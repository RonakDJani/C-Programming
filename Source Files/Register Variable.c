#include <stdio.h>
#include <conio.h>

void main()
{
    register int a;
    a = 1;
    while (a <= 5)
    {
        printf("Register variable a: %d\n", a);

        a++;
    }
    getch();
}