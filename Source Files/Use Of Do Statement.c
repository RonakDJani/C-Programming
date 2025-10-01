#include <stdio.h>

#define ROWMAX 10
#define COLMAX 12

int main()
{
    int column, row;

    printf("-------------------------------------------------------------------------------------------\n");
    printf("                                    Multiplication Table                                   \n");
    printf("-------------------------------------------------------------------------------------------\n");

    row = 1;

    do
    {
        column = 1;

        do
        {
            printf("%3d\t", (column * row));

            column++;
        }
        while(column <= COLMAX);

        printf("\n");

        row++;
    }
    while(row <= ROWMAX);

    printf("-------------------------------------------------------------------------------------------\n");

    return 0;
}