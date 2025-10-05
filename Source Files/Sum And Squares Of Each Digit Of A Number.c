#include <stdio.h>
#include <math.h>

int main()
{
    long long int number, original_number, square, total_of_squares;
    int remainder, divisor, digits = 0;

    printf("Enter a number: ");
    scanf("%lld", &number);

    square = total_of_squares = 0;
    original_number = number;

    while(number != 0)
    {
        number /= 10;
        digits++;
    }

    number = original_number;

    while(number != 0)
    {
        divisor = pow(10, (digits - 1));
        remainder = number % divisor;
        square = pow((number / divisor), 2);

        printf("Square of %d: %lld\n", (number / divisor), square);

        total_of_squares += square;
        number = remainder;
        digits--;
    }

    printf("Total of all squares: %lld", total_of_squares);

    return 0;
}