#include <stdio.h>
#include <conio.h>

#define PI 3.1416

void main()
{
    float a, r = 3;

    a = PI * (r * r);

    printf("Radius: %.2f\tArea: %.2f", r, a);
    getch();
}