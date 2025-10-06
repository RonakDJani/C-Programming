#include <stdio.h>
#include <math.h>

int main()
{
    long long int binary, decimal, remainder, temp, i;

    printf("Enter a binary number (to convert into decimal number): ");
    scanf("%lld", &binary);

    decimal = i = 0;
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

    printf("Decimal number: %lld", decimal);

    return 0;
}