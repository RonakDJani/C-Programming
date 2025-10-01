#include <stdio.h>

int main()
{
    int n, count, option;
    float x, y;
    char character;

    printf("While Loop\n1. Counter Controlled Loop\t2. Sentinel Controlled Loop: ");
    scanf("%d", &option);

    switch(option)
    {
        case 1:
        {
            printf("Enter values for x and n (for equation y = x ^ n): ");
            scanf("%f %d", &x, &n);

            y = 1.0;
            count = 1;

            while(count <= n)
            {
                y = y * x;
                count++;
            }

            printf("X: %f\tY: %d; x to power n: %f\n", x, n, y);

            break;
        }
        case 2:
        {
            character = ' ';
            
            printf("Testing sentinel value (to exit, enter 'Y'): ");

            while(character != 'Y')
            {
                character = getchar();

                if(character != '\n')
                {
                    printf("Character entered: %c\n", character);
                }
            }

            printf("Successfully exited the program.\n");

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