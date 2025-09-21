#include <stdio.h>

int main()
{
    int i, count = 0;
    float weight, height;

    printf("Count of people with weight < 50kg and height > 170:\n");
    printf("Enter values for weight (kg) and height (cm) for 10 people:\n");

    for(i = 1; i <= 10; i++)
    {
        scanf("%f %f", &weight, &height);

        if(weight < 50 && height > 170)
        {
            count++;
        }
    }

    printf("Total count: %d\n", count);

    return 0;
}