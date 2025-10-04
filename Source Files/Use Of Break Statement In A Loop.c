#include <stdio.h>

int main()
{
    int i;
    float value, sum, average;

    printf("This program computes the average of a set of number.\n");
    printf("Enter values one after another.\n");
    printf("Enter a negative value to terminate.\n");

    sum = 0;

    for(i = 1; i <= 1000; i++)
    {
        scanf("%f", &value);

        if(value < 0)
        {
            break;
        }

        sum += value;
    }

    average = sum / (float)(i - 1);

    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}