#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0;
    double x, cos_x = 0.0;
    double term, previous_sum;

    printf("Computing cosx = 1 - x^2/2! + x^4/4! - x^6/6! + ...\n");
    printf("Enter angle in radian: ");
    scanf("%lf", &x);
    printf("\n");

    term = x;

    do
    {
        previous_sum = cos_x;
        cos_x += term;

        printf("Term %d: %.10f, Sum = %.10f\n", i, term, cos_x);

        i++;
        term = -term * x * x / ((2 * i - 1) * (2 * i));
    }
    while(fabs(term) >= 0.00001);

    printf("\nCalculated cos(%.4f) = %.10f\n", x, cos_x);
    printf("Library function cos(%.4f) = %.10f\n", x, cos(x));
    printf("Difference = %.10f\n", fabs(cos_x - cos(x)));
    
    return 0;
}