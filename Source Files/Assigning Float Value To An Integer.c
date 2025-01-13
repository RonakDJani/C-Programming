#include <stdio.h>
#include <conio.h>

void main()
{
    float a, b;
    int c;

    printf("Enter float values for a and b: ");
    scanf("%f %f", &a, &b);

    c = a + b;

    printf("Value of a (float): %f\n", a);
    printf("Value of b (float): %f\n", b);
    printf("Value of c (int): %d\n", c);
    printf("The sum of %f and %f is %f\n", a, b, a + b);
    printf("The sum of a and b is a fractional value, the value stored in integer variable c truncates after decimal point (%d in this case).", c);
    getch();
}