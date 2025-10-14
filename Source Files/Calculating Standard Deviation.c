#include <stdio.h>
#include <math.h>

#define N 100

int main()
{
    int i, n;
    float values[N], sum, sum_square, mean, variance, deviation, std_deviation;

    sum = n = 0;
    printf("Enter values (-1 to terminate): ");
    for(i = 1; i < N; i++)
    {
        scanf("%f", &values[i]);

        if(values[i] == -1)
        {
            break;
        }

        sum += values[i];
        n++;
    }

    mean = sum / (float)n;

    for(i = 1; i <= n; i++)
    {
        deviation = values[i] - mean;
        sum_square += deviation * deviation;
    }

    variance = sum_square / (float)n;
    std_deviation = sqrt(variance);

    printf("\nNumber of values: %d\n", n);
    printf("Mean: %f\n", mean);
    printf("Standard deviation: %f", std_deviation);

    return 0;
}