#include <stdio.h>

#define MAX_ITEMS 4

int main()
{
    int i, quantity[5];
    float rate[5], value, total_value;
    char code[5][5];

    i = 0;
    
    while(i < MAX_ITEMS)
    {
        printf("%d Enter item code, quantity and rate: ", i + 1);
        scanf("%s %d %f", code[i], &quantity[i], &rate[i]);
        i++;
    }

    printf("Inventory Report\n");
    printf("Code   Quantity       Rate         Value\n");
    printf("----   --------     --------   ---------\n");

    i = 0;

    while(i < MAX_ITEMS)
    {
        value = quantity[i] * rate[i];
        printf("%s %8d %14.2f %11.2f\n", code[i], quantity[i], rate[i], value);
        total_value += value;
        i++;
    }

    printf("----   --------     --------   ---------\n");
    printf("Total Value: %.2f\n", total_value);

    return 0;
}