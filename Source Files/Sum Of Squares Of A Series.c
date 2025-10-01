#include <stdio.h>

int main()
{
    int n, count, sum;

    printf("Enter value for n (sum of squares of values from 1 to Nth value): ");
    scanf("%d", &n);

    sum = 0;
    count = 1;

    while(count <= n)
    {
        sum = sum + (count * count);
        count++;
    }

    printf("Sum of squares of values from 0 to %d: %d\n", n, sum);

    return 0;
}