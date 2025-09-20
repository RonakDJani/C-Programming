#include <stdio.h>

int main()
{
    register int a;
    a = 1;
    while (a <= 5)
    {
        printf("Register variable a: %d\n", a);

        a++;
    }
    
    return 0;
}