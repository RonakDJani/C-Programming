#include <stdio.h>

#define ROWMAX 10
#define COLMAX 10

void line_separator();

int main()
{
    int mul_table[ROWMAX][COLMAX];
    int i, j;

    for(i = 0; i < ROWMAX; i++)
    {
        for(j = 0; j < COLMAX; j++)
        {
            mul_table[i][j] = (i + 1) * (j + 1);
        }
    }

    printf("     MULTIPLICATION TABLE IN AN ARRAY\n");
    printf("   |");

    for(i = 1; i <= COLMAX; i++)
    {
        printf("%3d ", i);
    }

    printf("\n");

    line_separator();

    for(i = 0; i < ROWMAX; i++)
    {
        printf("%2d |", i + 1);

        for(j = 0; j < COLMAX; j++)
        {
            printf("%3d ", mul_table[i][j]);
        }

        printf("\n");
    }

    return 0;
}

void line_separator()
{
    printf("---+---------------------------------------\n");
}