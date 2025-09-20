#include <stdio.h>

int main()
{
    float x, y;
    double p, q;

    printf("Enter values for x and y (float): ");
    scanf("%f %e", &x, &y);
    printf("The values of x and y are: %f and %f\n\n", x, y);

    printf("Enter values for p and q (double): ");
    scanf("%lf %lf", &p, &q);
    printf("The values of p and q are: %.12lf and %.12le\n", p, q);

    return 0;
}