#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0;
    double x, sin_x = 0.0;
    double term, previous_sum;

    printf("Computing sinx = x - x^3 /3! + x^5/5! - x^7/7! + ...\n");
    printf("Enter angle in radian: ");
    scanf("%lf", &x);
    printf("\n");

    term = x;

    do
    {
        previous_sum = sin_x;
        sin_x += term;

        printf("Term %d: %.10f, Sum: %.10f\n", i, term, sin_x);

        i++;
        term = -term * x * x / ((2 * i) * (2 * i + 1));
    }
    while(fabs(term) >= 0.00001);

    printf("\nCalculated sin(%.4f) = %.10f\n", x, sin_x);
    printf("Library function sin(%.4f) = %.10f\n", x, sin(x));
    printf("Difference = %.10f\n", fabs(sin_x - sin(x)));
    
    return 0;
}