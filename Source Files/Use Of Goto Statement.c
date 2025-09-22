#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    int count = 1;

    printf("Enter 5 real values: ");
    
    read:
    scanf("%lf", &x);

    if(x < 0)
    {
        printf("Value - %d: %lf is negative value\n", count, x);
    }
    else
    {
        y = sqrt(x);

        printf("Square Root of %d: %lf\n", count, y);
    }

    count++;

    if(count <= 5)
    {
        goto read;
    }

    printf("End of computation.\n");

    return 0;
}