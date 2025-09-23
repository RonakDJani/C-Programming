#include <stdio.h>

#define FIXED_CHARGE 100
#define SURCHARGE 0.15

int main()
{
    char name[10];
    int units;
    float total_amount, net_amount;

    printf("Enter your first name and units consumed: ");
    scanf("%s %d", name, &units);

    if(units > 0 && units <= 200)
    {
        total_amount = FIXED_CHARGE + (units * 0.8);
    }
    else if(units > 200 && units <= 300)
    {
        total_amount = FIXED_CHARGE + ((200 * 0.8) + ((units - 200) * 0.9));
    }
    else
    {
        total_amount = FIXED_CHARGE + units * 1;
    }

    if(total_amount > 400)
    {
        net_amount = total_amount + (total_amount * SURCHARGE);
    }
    else
    {
        net_amount = total_amount;
    }

    printf("Name: %s\tNet Amount to pay: %.2f", name, net_amount);

    return 0;
}