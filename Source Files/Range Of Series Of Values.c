#include <stdio.h>

int main()
{
    float value, highest, lowest, sum, average, range;
    int count;

    count = 0;
    sum = 0;

    printf("Enter values to find average and range of series (0 to terminate): ");
    
    input:
    scanf("%f", &value);

    if(value == 0)
    {
        goto output;
    }

    count++;

    if(count == 1)
    {
        highest = lowest = value;
    }
    else if(value > highest)
    {
        highest = value;
    }
    else if(value < lowest)
    {
        lowest = value;
    }

    sum += value;

    goto input;

    output:
    average = sum / count;
    range = highest - lowest;

    printf("Highest: %.2f\n", highest);
    printf("Lowest: %.2f\n", lowest);
    printf("Range: %.2f\n", range);
    printf("Average: %.2f\n", average);

    return 0;
}