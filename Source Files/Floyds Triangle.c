#include <stdio.h>
#include <math.h>

int main()
{
    int row, column, range, option, select;

    printf("Floyd's Triangle:\n");
    printf("1.   1         2.   1\n");
    printf("     2 3            0 1\n");
    printf("     4 5 6          1 0 1\nSelect option: ");
    scanf("%d", &select);
    printf("Enter number of rows: ");
    scanf("%d",&option);

    switch(select)
    {
        case 1:
        {
            range = 1;

            for(row = 1; row <= option; row++)
            {
                for(column = 1; column <= row; column++)
                {
                    printf("%02d ", range);

                    range++;
                }

                printf("\n");
            }

            break;
        }
        case 2:
        {
            range = 0;

            for(row = 1; row <= option; row++)
            {
                for(column = 1; column <= row; column++)
                {
                    if(range % 2 != 0)
                    {
                        printf("0 ");
                    }
                    else
                    {
                        printf("1 ");
                    }

                    range++;
                }

                printf("\n");
            }

            break;
        }
        default:
        {
            printf("Invalid option entered!\n");

            break;
        }
    }

    return 0;
}