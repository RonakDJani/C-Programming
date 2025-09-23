#include <stdio.h>

int main()
{
    int i, count = 0, sum = 0;

    printf("Numbers that are divisible by 6 but not by 4 in the series of 0 to 100.\n");

    for(i = 1; i <= 100; i++)
    {
        if(i % 6 == 0 && i % 4 != 0)
        {
            count++;
            sum += i;
            printf("%d\n", i);
        }
    }

    printf("Count: %d\n", count);
    printf("Sum of numbers that are divisible by 6 but not 4: %d\n", sum);

    return 0;
}