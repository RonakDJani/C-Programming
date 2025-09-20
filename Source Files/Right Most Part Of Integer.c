#include <stdio.h>

int main()
{
    float number;
    int rmost;

    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    rmost = (int)number % 10; // Extracting the rightmost digit of the integer part

    printf("The rightmost digit of the integer part is: %d\n", rmost);

    return 0;
}