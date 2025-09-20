#include <stdio.h>

int main()
{
    int i = 0;

    while (i < 256)
    {
        printf("%d\t%c\n", i, i);

        i++;
    }
    
    return 0;
}