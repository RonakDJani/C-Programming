#include <stdio.h>

#define LOOP 100
#define ACCURACY 0.0001

int main()
{
    int i;
    float x, term, sum;

    printf("Enter value for x: ");
    scanf("%f", &x);

    sum = 0;

    for(term = 1, i = 1; i <= LOOP; i++)
    {
        sum += term;

        if(term <= ACCURACY)
        {
            goto output;
        }

        term *= x;
    }

    printf("\nFINAL VALUE OF N IS NOT SUFFICIANT TO ACHIEVE DESIRED ACCURACY.\n");

    goto end;

    output:
    printf("\nEXIT FROM LOOP\n");

    printf("Sum: %f; No. of terms: %d\n", sum, i);

    end:
    return 0;
}