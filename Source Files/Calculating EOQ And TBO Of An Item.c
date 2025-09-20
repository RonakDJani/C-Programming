#include <stdio.h>
#include <math.h>

int main()
{
    int demand_rate, setup_cost, holding_cost;
    float eoq, tbo;

    printf("Enter the annual demand rate (units per year): ");
    scanf("%d", &demand_rate);
    printf("Enter the setup cost per order (in currency units): ");
    scanf("%d", &setup_cost);
    printf("Enter the holding cost per unit per year (in currency units): ");
    scanf("%d", &holding_cost);

    eoq = sqrt((2.0 * demand_rate * setup_cost) / holding_cost);
    tbo = sqrt((2.0 * setup_cost) / (demand_rate * holding_cost));

    printf("Economic Order Quantity (EOQ): %.2f units\n", eoq);
    printf("Time Between Orders (TBO): %.2f years\n", tbo);

    return 0;
}