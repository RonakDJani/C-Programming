#include <stdio.h>
#include <math.h>

int main()
{
    double numbers[] = {35.7, 50.21, -23.73, -46.45};

    int number_of_elements = sizeof(numbers) / sizeof(numbers[0]);

    printf("Rounding off floating-point numbers to the nearest integer:\n");

    for(int i = 0; i < number_of_elements; i++)
    {
        long int rounded_number = round(numbers[i]);

        printf("Original: %.2f, Rounded: %ld\n", numbers[i], rounded_number);
    }

    return 0;
}