#include <stdio.h>
#include <math.h>

int main()
{
    double original_cost, depreciation_rate, scrap_value;
    double useful_life, present_value;
    int year;

    printf("==== Depreciation Calculator ====\n");
    printf("Enter the original cost of the item: ");
    scanf("%lf", &original_cost);
    printf("Enter the rate of depreciation (as decimal, e.g., 0.1 for 10%%): ");
    scanf("%lf", &depreciation_rate);
    printf("Enter the scrap value at end of useful life: ");
    scanf("%lf", &scrap_value);

    if(original_cost <= 0 || scrap_value <= 0)
    {
        printf("\nError: Cost and scrap value must be positive.\n");
        return 1;
    }

    if(depreciation_rate <= 0 || depreciation_rate >= 1)
    {
        printf("\nError: Depreciation rate must be between 0 and 1.\n");
        return 1;
    }

    if(scrap_value >= original_cost)
    {
        printf("\nError: Scrap value must be less than original cost.\n");
        return 1;
    }

    useful_life = log(scrap_value / original_cost) / log(1 - depreciation_rate);

    printf("\n==== Results ====\n");
    printf("Original Cost: %.2f\n", original_cost);
    printf("Depreciation Rate: %.2f%% per year\n", depreciation_rate * 100);
    printf("Scrap Value: %.2f\n", scrap_value);
    printf("Useful Life: %.2f years\n\n", useful_life);

    printf("==== Year-by-Year Depreciation ====\n");
    printf("Year\tPresent Value\n");
    printf("----\t-------------\n");

    present_value = original_cost;
    printf(" 0\t%13.2f\n", present_value);

    for(year = 1; year <= (int)ceil(useful_life); year++)
    {
        present_value = original_cost * pow(1 - depreciation_rate, year);
        printf("%2d\t%13.2f\n", year, present_value);
    }

    return 0;
}