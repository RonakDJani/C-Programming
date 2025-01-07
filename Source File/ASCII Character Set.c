#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 0;

    while (i < 256)
    {
        printf("%d\t%c\n", i, i);

        i++;
    }
    getch();
}