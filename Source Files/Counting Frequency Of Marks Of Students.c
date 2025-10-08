#include <stdio.h>

#define MAXVAL 50
#define COUNTER 11

int main()
{
    float marks[MAXVAL];
    int i, low, high;
    int group[COUNTER] = {0};

    printf("Enter marks of each students in the class (Total Students = 50):\n");

    for(i = 0; i < MAXVAL; i++)
    {
        scanf("%f", &marks[i]);
        ++group[(int)marks[i] / 10];
    }

    printf("\n");
    printf("Group             Range           Frequency\n");

    for(i = 0; i < COUNTER; i++)
    {
        low = i * 10;

        if(i == 10)
        {
            high = 100;
        }
        else
        {
            high = low + 9;
        }

        printf("%3d            %3d to %3d             %d\n", i + 1, low, high, group[i]);
    }

    return 0;
}