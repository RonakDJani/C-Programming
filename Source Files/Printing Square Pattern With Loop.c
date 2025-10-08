#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            if(i == 2 || i == 3 || i == 4)
            {
                if (j == 2 || j == 3 || j == 4)
                {
                    printf("  ");
                }
                else
                {
                    printf("S ");
                }
            }
            else
            {
                printf("S ");
            }
        }
        
        printf("\n");
    }

    return 0;
}