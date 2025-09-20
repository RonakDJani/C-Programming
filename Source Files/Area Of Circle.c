#include <stdio.h>

#define PI 3.1416

int main()
{
    float area, radius = 3;

    area = PI * (radius * radius);

    printf("Radius: %.2f\tArea: %.2f", radius, area);
    
    return 0;
}