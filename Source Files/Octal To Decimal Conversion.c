#include <stdio.h>
#include <math.h>

int main()
{
    long long int octal, decimal, remainder, i = 0;

    printf("Enter a octal number (to convert into decimal number): ");
    scanf("%lld", &octal);

    decimal = 0;

    while(octal != 0)
    {
        remainder = octal % 10;
        octal /= 10;
        decimal += remainder * pow(8, i);
        ++i;
    }

    printf("Decimal number: %lld", decimal);

    return 0;
}