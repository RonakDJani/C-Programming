#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 0;
    while (i <= 255)
    {
        printf("%3d\t%c\n", i, i);
        i++;
    }
    getch();
}