#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.1416

void main()
{
    float x1 = 2, y1 = 2, x2 = 5, y2 = 6, diameter, area;

    diameter = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    area = PI * pow(diameter / 2, 2);

    printf("Diameter of circle: %.2f\n", diameter);
    printf("Area of circle: %.2f", area);
    getch();
}