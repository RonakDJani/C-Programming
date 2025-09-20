#include <stdio.h>

int main()
{
    int numerator = 15, denominator = 4;

    // Without type casting, this would be integer division (15 / 4 = 3)
    float result = (float)numerator / denominator;

    printf("Result of %d / %d is: %f", numerator, denominator, result); // Expected output: 3.750000

    return 0;
}