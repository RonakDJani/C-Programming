#include <stdio.h>

int main()
{
    const float service_cost = 250.0; // Fixed service cost
    const float call_over_100 = 1.25; // Cost per call over 100
    int number_of_calls;
    float total_cost;

    printf("Enter the number of service calls made: ");
    scanf("%d", &number_of_calls);

    if (number_of_calls <= 100) 
    {
        total_cost = service_cost;
    }
    else
    {
        total_cost = service_cost + (number_of_calls - 100) * call_over_100;
    }

    printf("Total service cost: Rs.%.2f\n", total_cost);

    return 0;
}