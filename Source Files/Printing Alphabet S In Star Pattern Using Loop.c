#include <stdio.h>

int main()
{
    int row, col;
    
    for(row = 1; row <= 15; row++)
    {
        for(col = 1; col <= 18; col++)
        {
            if(row == 4 || row == 5 || row == 6)
            {
                if(col <= 4)
                {
                    printf("*");
                }
                else
                {
                    break;
                }
            }
            else
            {
                if(row == 10 || row == 11 || row == 12)
                {
                    if(col <= 14)
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("*");
                    }
                }
                else
                {
                    printf("*");
                }
            }
        }

        printf("\n");
    }

    return 0;
}