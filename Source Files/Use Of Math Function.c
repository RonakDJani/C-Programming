#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.1416
#define MAX 180

void main()
{
    int angle;
    float x, y;

    angle = 0;

    printf("          Angle\t\tCos(Angle)\n");

    while (angle <= MAX)
    {
        x = (PI / MAX) * angle;
        y = cos(x);

        printf("%15d\t     %13.4f\n", angle, y);

        angle = angle + 10;
    }
    getch();
}