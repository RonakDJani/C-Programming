#include <stdio.h>

#define MAX 100

int main()
{
    int i, age, count = 0;
    printf("Enter values for age one after another (to people between 50 to 60 age).\n");
    printf("Enter negative value to terminate: ");

    for(i = 1; i <= MAX; i++)
    {
        scanf("%d", &age);

        if(age >= 50 && age <= 60)
        {
            count++;

            continue;
        }
        else
        {
            if(age < 0)
            {
                break;
            }
        }
    }

    printf("Number of people in the age range from 50 to 60: %d", count);

    return 0;
}