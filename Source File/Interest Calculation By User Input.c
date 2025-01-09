#include <stdio.h>
#include <conio.h>

void main()
{
    int year, period;
    float amount, inrate, value;

    printf("Enter amount, interest rate and period: ");
    scanf("%f %f %d", &amount, &inrate, &period);

    year = 1;

    printf("\nYear\tAmount\n");

    while (year <= period)
    {
        value = amount + inrate * amount;
        
        printf("%d\t%.2f\n", year, value);

        amount = value;
        year = year + 1;
    }
    getch();
}