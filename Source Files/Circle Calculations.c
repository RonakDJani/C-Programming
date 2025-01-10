#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.1416

void main()
{
    float x1 = 0, y1 = 0, x2 = 4, y2 = 5, radius, perimeter, area;

    radius = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    perimeter = 2 * PI * radius;
    area = PI * pow(radius, 2);

    printf("Radius of circle: %.2f\n", radius);
    printf("Perimeter of circle: %.2f\n", perimeter);
    printf("Area of circle: %.2f", area);
    getch();
}