#include <stdio.h>

int main()
{
    long long int decimal, octal, remainder, base = 1;

    printf("Enter a positive decimal number (to convert into octal number): ");
    scanf("%lld", &decimal);

    octal = 0;

    while(decimal != 0)
    {
        remainder = decimal % 8;
        decimal /= 8;
        octal += remainder * base;
        base *= 10;
    }

    printf("Octal number: %lld", octal);

    return 0;
}