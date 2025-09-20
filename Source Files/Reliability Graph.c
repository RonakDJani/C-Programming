#include <stdio.h>
#include <math.h>

#define LAMBDA 0.001 // Failure rate (failures per hour)
#define MAX_TIME 3000 // Maximum time in hours
#define TIME_STEP 150 // Time step in hours

int main()
{
    double time;
    float reliability;
    int i, rows;

    for(i = 1; i <= 27; ++i)
    {
        printf("--");
    }

    printf("\n");

    for(time = 0; time <= MAX_TIME; time += TIME_STEP)
    {
        reliability = exp(-LAMBDA * time);
        rows = (int)(50*reliability + 0.5); // Round to nearest integer
        printf("  |");
        for(i = 1; i <= rows; ++i)
        {
            printf("*");
        }

        printf("#\n");

        for(i = 1; i < 1; ++i)
        {
            printf("  |\n");
        }
    }
}