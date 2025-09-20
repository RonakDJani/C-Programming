#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integer value: ");
    scanf("%d", &number);

    if( number % 2 == 0)
    {
        printf("%d is an even number becuase it is divisible by 2.\n", number);
    }
    else
    {
        printf("%d is an odd number because it is not divisible by 2.\n", number);
    }

    return 0;
}