#include <stdio.h>

int main()
{
    int option;
    float purchase_amount, discount, net_amount;

    printf("Discounts available on mill cloths and handloom cloths!\n");
    printf("Select category - 1. Mill Cloths\t2.Handloom Cloths: ");
    scanf("%d", &option);

    switch(option)
    {
        case 1:
        {
            printf("Enter purchase amount: ");
            scanf("%f", &purchase_amount);

            if(purchase_amount > 0 && purchase_amount <= 100)
            {
                printf("Discount is not valid on purchase of Rs.%.2f\n", purchase_amount);

                break;
            }
            else if(purchase_amount >= 101 && purchase_amount <= 200)
            {
                discount = purchase_amount * 0.05;
                net_amount = purchase_amount - discount;
            }
            else if(purchase_amount >= 201 && purchase_amount <= 300)
            {
                discount = purchase_amount * 0.075;
                net_amount = purchase_amount - discount;
            }
            else
            {
                discount = purchase_amount * 0.1;
                net_amount = purchase_amount - discount;
            }

            printf("Discount: Rs.%.2f, Net Amount to pay: Rs.%.2f\n", discount, net_amount);

            break;
        }
        case 2:
        {
            printf("Enter purchase amount: ");
            scanf("%f", &purchase_amount);

            if(purchase_amount > 0 && purchase_amount <= 100)
            {
                discount = purchase_amount * 0.05;
                net_amount = purchase_amount;
            }
            else if(purchase_amount >= 101 && purchase_amount <= 200)
            {
                discount = purchase_amount * 0.075;
                net_amount = purchase_amount - discount;
            }
            else if(purchase_amount >= 201 && purchase_amount <= 300)
            {
                discount = purchase_amount * 0.1;
                net_amount = purchase_amount - discount;
            }
            else
            {
                discount = purchase_amount * 0.15;
                net_amount = purchase_amount - discount;
            }

            printf("Discount: Rs.%.2f, Net Amount to pay: Rs.%.2f\n", discount, net_amount);

            break;
        }
        default:
        {
            printf("Invalid option selected!\n");
        }
    }

    return 0;
}