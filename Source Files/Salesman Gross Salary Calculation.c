#include <stdio.h>

#define BASE_SALARY 1500.00
#define BONUS_RATE 200.00
#define COMMISSION 0.02

int main()
{
    int quantity;
    float gross_salary, price;
    float bonus, commission;

    printf("Enter the quantity of computers sold and price: ");
    scanf("%d %f", &quantity, &price);

    bonus = BONUS_RATE * quantity;
    commission = COMMISSION * quantity * price;
    gross_salary = BASE_SALARY + bonus + commission;

    printf("Bonus: %20.2f\n", bonus);
    printf("Commission: %15.2f\n", commission);
    printf("Gross Salary: %13.2f\n", gross_salary);

    return 0;
}