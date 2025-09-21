#include <stdio.h>

int main()
{
    int a, b, c, largest;

    printf("Enter values for a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b)
    {
        if(a > c)
        {
            largest = a;
            printf("Largest value is a: %d\n", largest);
        }
        else
        {
            largest = c;
            printf("Largest value is c: %d\n", largest);
        }
    }
    else
    {
        if(c > b)
        {
            largest = c;
            printf("Largest value is c: %d\n", largest);
        }
        else
        {
            largest = b;
            printf("Largest value is b: %d\n", largest);
        }
    }

    return 0;
}