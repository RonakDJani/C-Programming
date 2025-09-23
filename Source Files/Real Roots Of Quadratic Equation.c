#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, x, discriminant;

    printf("Enter values for a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0 && b == 0)
    {
        printf("Can't compute further! Because a and b are 0.\n");
    }
    else if(a == 0)
    {
        x = -c / b;

        printf("There is only one root. Root X: %f\n", x);
    }
    else
    {
        discriminant = pow(b, 2) - 4 * a * c;

        if(discriminant >= 0)
        {
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            x2 = (-b - sqrt(discriminant)) / (2 * a);

            printf("There are two real roots.\nRoot X1: %f and Root X2: %f\n", x1, x2);
        }
        else
        {
            printf("There are no real roots.\n");
        }
    }

    return 0;
}