#include <stdio.h>
#include <math.h>

int main()
{
    long long int binary, decimal, octal, remainder, temp, i;

    printf("Enter a binary number (to convert into octal number): ");
    scanf("%lld", &binary);

    octal = decimal = i = 0;
    temp = binary;

    while(temp != 0)
    {
        remainder = temp % 10;

        if(remainder > 1)
        {
            return -1;
        }

        temp /= 10;
        decimal += remainder * (int)pow(2, i);
        ++i;
    }

    i = 1;

    while(decimal != 0)
    {
        remainder = decimal % 8;
        decimal /= 8;
        octal += remainder * i;
        i *= 10;
    }

    printf("Octal number: %lld", octal);

    return 0;
}