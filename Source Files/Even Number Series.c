#include <stdio.h>
#include <conio.h>

void main()
{
    int lenght;

    printf("Enter the lenght of even number series from 0 to: ");
    scanf("%d", &lenght);

    for (int i = 1; i <= lenght; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    getch();
}