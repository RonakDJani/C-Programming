#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1;
    double sum = 0.0, term, previous_sum;

    printf("Computing special sum series: 1 + (1/2)^2 + (1/3)^3 + (1/4)^4 + ...\n\n");

    do
    {
        previous_sum = sum;
        term = pow(1.0 / i, i);
        sum += term;

        printf("Term %d: (1/%d)^%d = %.10f, Sum = %.10f\n", i, i, i, term, sum);

        i++;
    }
    while(fabs(term) >= 0.00001);

    printf("\nFinal Sum = %.10f\n", sum);
    printf("Number of terms: %d\n", i - 1);

    return 0;
}