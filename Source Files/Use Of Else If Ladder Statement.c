#include <stdio.h>

int main()
{
    int units, cust_no;
    float bill_amount;

    printf("Enter customer number and units consumed:\n");
    scanf("%d %d", &cust_no, &units);

    if(units <= 200)
    {
        bill_amount = units * 0.5;
    }
    else if(units <= 400)
    {
        bill_amount = 100 + 0.65 * (units - 200);
    }
    else if(units <= 600)
    {
        bill_amount = 230 + 0.80 * (units - 400);
    }
    else
    {
        bill_amount = 390 + 1.00 * (units - 600);
    }

    printf("Customer Number: %d\nUnits Consumed: %d\nBill Amount: %.2f\n", cust_no, units, bill_amount);

    return 0;
}