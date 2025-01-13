#include <stdio.h>
#include <conio.h>

void main()
{
    const float PI = 3.14159;
    float radius = 5.0;

    float circumference = 2 * PI * radius;

    printf("Radius: %.2f\n", radius);
    printf("Circumference: %.2f\n", circumference);
    printf("The value of \"const float PI = %.5f\" variable can't be modify as it is declared as a constant variable.", PI);
    getch();
}