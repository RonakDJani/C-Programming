#include <stdio.h>

int main()
{
    int i = 5, j, k = 1;

    while (k <= 10)
    {
        j = i * k;
        printf("%d * %2d = %2d\n", i, k, j);

        k++;
    }
    
    return 0;
}