#include <stdio.h>

int main()
{
    int a, b, c, x, y, z, p, q, r;

    printf("Enter three integers separated by spaces: ");
    scanf("%d %*d %d", &a, &b, &c); // Read first and third integers, ignore the second
    printf("The integers you entered are: %d, %d, %d\n\n", a, b, c);

    printf("Enter two 4-digit integers separated by spaces: ");
    scanf("%2d %4d", &x, &y); // Read first 2 digits of first integer and all 4 digits of second integer
    printf("The integers you entered are: %d, %d\n\n", x, y);

    printf("Enter two integers separated by spaces: ");
    scanf("%d %d", &a, &x); // Read two integers
    printf("The integers you entered are: %d, %d\n\n", a, x);

    printf("Enter a 9-digit integer: ");
    scanf("%3d %4d %3d", &p, &q, &r); // Read three parts of the integer
    printf("The parts of the nine-digit integer are: %d, %d, %d\n\n", p, q, r);

    printf("Enter two 3-digit integers separated by spaces: ");
    scanf("%d %d", &x, &y); // Read two integers
    printf("The integers you entered are: %d, %d\n", x, y);

    return 0;
}