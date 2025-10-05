#include <stdio.h>

int main()
{
    long long int number, original_number, reversed_number = 0;
    int remainder, isNegative = 0;

    printf("Enter an integer to reverse: ");

    if(scanf("%lld", &number) != 1)
    {
        printf("Invalid input! Please enter a valid integer.\n");
        
        return 1;
    }

    if(number < 0)
    {
        isNegative = 1;
        number = -number;
    }

    original_number = number;

    while(number != 0)
    {
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
    }

    if(isNegative)
    {
        reversed_number = -reversed_number;
        original_number = -original_number;
    }

    printf("Original number: %lld\n", original_number);
    printf("Reversed number: %lld", reversed_number);

    return 0;
}