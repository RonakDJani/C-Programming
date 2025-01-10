#include <stdio.h>
#include <conio.h>

void main()
{
    float x, y, z;

    printf("Enter value for x and y: ");
    scanf("%f %f", &x, &y);

    printf("x: %.2f\ty: %.2f\n", x, y);
    printf("Sum: %.2f\tDifference: %.2f\n", x + y, x - y);
    printf("Product: %.2f\tDivision: %.2f", x * y, x / y);
    getch();
}