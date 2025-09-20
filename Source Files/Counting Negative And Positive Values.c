#include <stdio.h>

int main()
{
    int number;
    int negative_count = 0, positive_count = 0;

    printf("Enter numbers (terminate with 0):\n");

    while (1)
    {
        scanf("%d", &number);

        if (number == 0)
        {
            break;
        }
        
        if (number > 0)
        {
            positive_count++;
        }
        else if (number < 0)
        {
            negative_count++;
        }
    }

    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    
    return 0;
}