#include <stdio.h>

int main()
{
    float lenght, width, area, perimeter;

    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &lenght, &width);

    area = lenght * width;
    perimeter = 2 * (lenght + width);

    printf("Area of Rectangle: %.2f\n", area);
    printf("Perimeter of Rectangle: %.2f\n", perimeter);

    return 0;
}