#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float a = 3, b = 4, c = 5, s, area;

    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Sides of triage %.2f, %.2f and %.2f\nArea of triangle: %.2f", a, b, c, area);
    getch();
}