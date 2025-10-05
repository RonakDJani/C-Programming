#include <stdio.h>

int main()
{
    int number, factor;

    printf("Enter an integer (to find it's factor): ");
    scanf("%d", &number);

    factor = number;

    while(number > 1)
    {
        factor = factor * (--number);
    }

    printf("Factor: %d", factor);

    return 0;
}