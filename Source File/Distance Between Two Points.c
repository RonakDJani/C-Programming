#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float x1, y1, x2, y2, distance;

    printf("Enter coordinates of th first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of th second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The distance between the points (%.2f, %.2f) and (%.2f, %.2f) is: %.2f\n", x1, y1, x2, y2, distance);
    getch();
}