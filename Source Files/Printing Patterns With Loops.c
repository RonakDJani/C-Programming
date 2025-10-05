#include <stdio.h>

int main()
{
    int i, j, k, value, temp, option;

    printf("Choose pattern to print.\n");
    printf("1. 1       2. * * *\n   2 2          * *\n   3 3 3          *\n");
    printf("Option: ");
    scanf("%d", &option);

    switch(option)
    {
        case 1:
        {
            printf("Enter a value: ");
            scanf("%d", &value);

            for(i = 1; i <= value; i++)
            {
                for(j = 1; j <= i; j++)
                {
                    printf("%d ", i);
                }

                printf("\n");
            }

            break;
        }
        case 2:
        {
            printf("Enter a value: ");
            scanf("%d", &value);

            temp = value;

            for(i = 1; i <= value; i++)
            {
                for(j = temp; j >= 1; j--)
                {
                    printf("* ");
                }

                temp--;
                printf("\n");

                for(k = 1; k <= i; k++)
                {
                    printf("%2s", "  ");
                }
            }

            break;
        }
        default:
        {
            printf("Invalid option selected!\n");

            break;
        }
    }
    
    return 0;
}