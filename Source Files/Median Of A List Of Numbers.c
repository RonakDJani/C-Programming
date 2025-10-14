#include <stdio.h>

#define N 10

int main()
{
    int i, j, size;
    float list[N], temp, median;

    printf("Enter the size of the list: ");
    scanf("%d", &size);

    for(i = 1; i <= size; i++)
    {
        printf("list[%d]: ", i);
        scanf("%f", &list[i]);
    }

    for(i = 1; i <= size - 1; i++)
    {
        for(j = 1; j <= size - i; j++)
        {
            if(list[j] >= list[j + 1])
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }

    if(size % 2 == 0)
    {
        median = (list[size / 2] + list[(size / 2) + 1]) / 2.0;
    }
    else
    {
        median = list[(size / 2) + 1];
    }

    printf("Shorted list\n");

    for(i = 1; i <= size; i++)
    {
        printf("list[%d]: %.2f\n", i, list[i]);
    }

    printf("Median of the list: %.2f", median);

    return 0;
}