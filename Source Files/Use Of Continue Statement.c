#include <stdio.h>
#include <math.h>

int main()
{
    int count, n_count;
    double value, sqroot;

    printf("Enter 9999 to STOP.\n");

    count = n_count = 0;

    while(count <= 100)
    {
        printf("Enter a number: ");
        scanf("%lf", &value);

        if(value == 9999)
        {
            break;
        }

        if(value < 0)
        {
            printf("Negative value entered!\n");
            n_count++;
            continue;
        }

        sqroot = sqrt(value);
        printf("Value: %.2f\nSquare root: %.2f\n", value, sqroot);
        count++;
    }

    printf("Number of values calculated: %d\n", count);
    printf("Number of negative values skipped: %d", n_count);
    
    return 0;
}