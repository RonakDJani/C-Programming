#include <stdio.h>
#include <math.h>

int main()
{
    int value;

    printf("Enter an integer value: ");
    scanf("%d", &value);

    // Special case to handle the input '0'
    if (value == 0)
    {
        printf("0\n");
    }

    // Use a loop to remove the leftmost digit in each iteration
    while (value > 0)
    {
        // Print the current value
        printf("%d\n", value);

        // Find the highest power of 10 less than or equal to the current value
        int power_of_10 = 1;
        while (power_of_10 * 10 <= value)
        {
            power_of_10 *= 10;
        }

        // Remove the leftmost digit by taking the remainder after dividing by the power of 10
        value = value % power_of_10;
    }

    return 0;
}