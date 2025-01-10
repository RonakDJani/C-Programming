#include <stdio.h>
#include <conio.h>

void main()
{
    auto int a;
    a = 10;

    printf("A of main: %d\n", a);

    {
        auto int a;
        a = 20;
        printf("A of a block in main: %d", a);
    }

    getch();
}