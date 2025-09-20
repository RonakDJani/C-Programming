#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
    {
        printf("Roots are imaginary.\n");
    }
    else
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    }

    return 0;
}