#include <stdio.h>
#include <math.h>

int main()
{
    float values[4];

    printf("Enter four floating-point numbers from 0.0 to 20.0: ");
    scanf("%f %f %f %f", &values[0], &values[1], &values[2], &values[3]);
    printf("\n");

    for(int i = 0; i < 4; i++)
    {
        long int rounded_value = round(values[i]);
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < rounded_value; k++)
            {
                printf("***");
            }

            if(j == 1)
            {
                printf("  %.2f", values[i]);
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}