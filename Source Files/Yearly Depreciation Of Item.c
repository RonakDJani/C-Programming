#include <stdio.h>

int main()
{
    int purchase_price, service_year, salvage_value;
    float depreciation;

    printf("Enter purchase price, service year and salvage value: ");
    scanf("%d %d %d", &purchase_price, &service_year, &salvage_value);

    depreciation = (float)(purchase_price - salvage_value) / service_year;

    printf("Yearly Depreciation of Item: %.2f\n", depreciation);

    return 0;
}