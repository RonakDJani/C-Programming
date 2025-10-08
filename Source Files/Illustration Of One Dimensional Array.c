#include <stdio.h>

int main()
{
    int i;
    float x[10], mul_array, sum = 0;

    printf("Enter 10 values for floating point array: ");

    for(i = 0; i < 10; i++)
    {
        scanf("%f", &x[i]);
    }

    for(i = 0; i < 10; i++)
    {
        mul_array = x[i] * x[i];
        sum += mul_array;

        printf("x[%2d]: %5.2f, x[%5.2f]^2 = %6.2f\n", i, x[i], x[i], mul_array);
    }

    printf("Total of each array x[i]^2: %.2f", sum);

    return 0;
}