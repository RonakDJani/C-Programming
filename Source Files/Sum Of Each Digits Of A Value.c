#include <stdio.h>

int main()
{
    int value, sum = 0, digits;

    printf("Enter an integer value: ");
    scanf("%d", &value);

    // Handle the case when the input value is 0
    if (value == 0)
    {
        sum = 0;
    }
    else
    {
        // Use a loop to extract each digit and add it to the sum
        while (value > 0)
        {
            digits = value % 10; // Get the last digit
            sum += digits;       // Add it to the sum
            value /= 10;         // Remove the last digit
        }
    }

    printf("Sum of each digit: %d\n", sum);

    return 0;
}