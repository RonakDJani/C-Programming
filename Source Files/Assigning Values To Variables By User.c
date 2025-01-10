#include <stdio.h>
#include <conio.h>

void main()
{
    float x, p;
    double y, q;
    unsigned k;
    int m;
    long int n;

    printf("Enter values for X and p (float): ");
    scanf("%f %f", &x, &p);
    printf("Enter values for y and q (double): ");
    scanf("%lf %lf", &y, &q);
    printf("Enter values for k (unsigned): ");
    scanf("%u", &k);
    printf("Enter values m (int): ");
    scanf("%d", &m);
    printf("Enter values for n (long int): ");
    scanf("%ld", &n);
    
    printf("\nValues assigned to variables are:\n");
    printf("m = %d\n", m);
    printf("n = %ld\n", n);
    printf("x = %.12f\n", x);
    printf("x = %f\n", x);
    printf("y = %.12lf\n", y);
    printf("y = %lf\n", y);
    printf("k = %u\tp = %f\tq = %.12lf", k, p, q);
    getch();
}