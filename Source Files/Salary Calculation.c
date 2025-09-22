#include <stdio.h>

#define CA1 1000
#define CA2 750
#define CA3 500
#define CA4 250
#define EA1 500
#define EA2 200
#define EA3 100
#define EA4 0

int main()
{
    int level, job_no;
    float basic, hra, perks, gross, net, income_tax;

    input:
    printf("Enter level, job number and basic pay:\n");
    printf("Enter 0 for level to terminate:\n");
    scanf("%d", &level);

    if(level == 0)
    {
        goto stop;
    }

    scanf("%d %f", &job_no, &basic);

    switch(level)
    {
        case 1:
        {
            perks = CA1 + EA1;
            break;
        }
        case 2:
        {
            perks = CA2 + EA2;
            break;
        }
        case 3:
        {
            perks = CA3 + EA3;
            break;
        }
        case 4:
        {
            perks = CA4 + EA4;
            break;
        }
        default:
        {
            printf("Incorrect level entered!\n");
            
            goto stop;
        }
    }

    hra = basic * 0.25;
    gross = basic + hra + perks;
    
    if(gross <= 2000)
    {
        income_tax = 0;
    }
    else if(gross <= 4000)
    {
        income_tax = gross * 0.03;
    }
    else if(gross <= 6000)
    {
        income_tax = gross * 0.05;
    }
    else
    {
        income_tax = gross * 0.08;
    }

    net = gross - income_tax;

    printf("Net Salary: %.2f\n", net);

    goto input;

    stop:
    printf("End of program\n");

    return 0;
}