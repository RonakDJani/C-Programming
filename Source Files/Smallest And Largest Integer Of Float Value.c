#include <stdio.h>
#include <math.h>

int main()
{
    float number;
    int smallest, largest;

    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    printf("Entered number: %f\n", number);

    smallest = (int)ceil(number);
    largest = (int)floor(number);

    printf("Smallest integer greater than or equal to %f is: %d\n", number, smallest);
    printf("Largest integer less than or equal to %f is: %d\n", number, largest);

    return 0;
}