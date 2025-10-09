#include <stdio.h>

#define MAXGIRLS 4
#define MAXITEMS 3

int main()
{
    int sales[MAXGIRLS][MAXITEMS];
    int girl_sales[MAXGIRLS] = {0}, item_sales[MAXITEMS] = {0};
    int total_sales = 0, i, j, k;

    printf("SALES DATA ANALYSIS\n");
    printf("Enter value for each items (MAX: %d) for each sales girls (MAX: %d).\n", MAXITEMS, MAXGIRLS);

    for(i = 0; i < MAXGIRLS; i++)
    {
        printf("Sales Girl %d: ", i + 1);

        for(j = 0; j < MAXITEMS; j++)
        {
            scanf("%d", &sales[i][j]);

            girl_sales[i] += sales[i][j];

            total_sales += sales[i][j];
        }
    }

    for(i = 0; i < MAXITEMS; i++)
    {
        for(j = 0; j < MAXGIRLS; j++)
        {
            item_sales[i] += sales[j][i];
        }
    }

    printf("\n");
    printf("SALES TABLE             Item 1   Item 2   Item 3   Total Sales (By Girl)\n");

    k = 0;

    for(i = 0; i < MAXGIRLS; i++)
    {
        printf("Sales Girl %d:         ", i + 1);

        for(j = 0; j < MAXITEMS; j++)
        {
            printf("%8d ", sales[i][j]);
        }

        printf("%23d\n", girl_sales[i]);
    }

    printf("Total Sales (By Item):");

    for(i = 0; i < MAXITEMS; i++)
    {
        printf("%8d ", item_sales[i]);
    }
    printf("  Grand total: %8d", total_sales);

    return 0;
}