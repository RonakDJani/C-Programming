#include <stdio.h>

int main()
{
    const float PI = 3.14159; // Constant value
    float radius = 5.0;

    float circumference = 2 * PI * radius; // Calculating circumference

    printf("Radius: %.2f\n", radius);
    printf("Circumference: %.2f\n", circumference);
    printf("The value of \"const float PI = %.5f\" variable can't be modify as it is declared as a constant variable.", PI);

    // Uncommenting the next line will cause a compilation error
    // PI = 3.14;

    return 0;
}