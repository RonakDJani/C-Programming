#include <stdio.h>
#include <conio.h>

void main()
{
    int num_val, count;
    float total, average, value;

    printf("Enter total number of values: ");
    scanf("%d", &num_val);

    count = 0;
    total = 0;

    while (count < num_val)
    {
        scanf("%f", &value);
        total += value;
        count++;
    }
    
    average = total / num_val;

    printf("Total: %.2f\n", total);
    printf("Average: %.2f", average);
    getch();
}