#include <stdio.h>
#include <conio.h>

void main()
{
    float divisor, divider, result;

    printf("Enter values of divisor and divider: ");
    scanf("%f %f", &divisor, &divider);

    result = divisor / divider;

    printf("%f %c %f = %f", divisor, 246, divider, result);
    getch();
}