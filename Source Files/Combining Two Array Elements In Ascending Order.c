#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int i, j, temp, countA, countB;

    countA = countB = 0;

    printf("Enter array elements for A (-1 to terminate):\n");

    for(i = 0; i < 100; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
        
        if(a[i] == -1)
        {
            break;
        }

        countA++;
    }

    printf("\nEnter array elements for B (-1 to terminate):\n");

    for(i = 0; i < 100; i++)
    {
        printf("B[%d]: ", i);
        scanf("%d", &b[i]);

        if(b[i] == -1)
        {
            break;
        }

        countB++;
    }

    for(i = 0; i < countA + countB; i++)
    {
        if(i < countA)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i - countA];
        }
    }

    for(i = 0; i < countA + countB - 1; i++)
    {
        for(j = 0; j < countA + countB - 1; j++)
        {
            if(c[j] >= c[j + 1])
            {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
            else
            {
                continue;
            }
        }
    }

    printf("\nArray A and B combined in array C in ascending order:\n");

    for(i = 0; i < countA + countB; i++)
    {
        printf("C[%d]: %d\n", i, c[i]);
    }

    return 0;
}