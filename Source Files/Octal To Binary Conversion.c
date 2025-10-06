#include <stdio.h>
#include <math.h>

int main()
{
    long long int octal, decimal, binary, remainder, i = 0;

    printf("Enter a octal number (to convert into decimal number): ");
    scanf("%lld", &octal);

    decimal = binary = 0;

    while(octal != 0)
    {
        remainder = octal % 10;
        octal /= 10;
        decimal += remainder * pow(8, i);
        ++i;
    }

    i = 1;

    while(decimal > 0)
    {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * i;
        i *= 10;
    }

    printf("Binary number: %lld", binary);

    return 0;
}