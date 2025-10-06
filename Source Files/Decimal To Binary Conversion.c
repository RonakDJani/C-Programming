#include <stdio.h>

int main()
{
    long long int decimal, binary, remainder, base = 1;

    printf("Enter a positive decimal number (to convert into binary number): ");
    scanf("%lld", &decimal);

    binary = 0;

    while(decimal > 0)
    {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * base;
        base *= 10;
    }

    printf("Binary number: %lld", binary);

    return 0;
}