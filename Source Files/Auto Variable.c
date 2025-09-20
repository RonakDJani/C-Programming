#include <stdio.h>

int main()
{
    auto int a;
    a = 10;

    printf("A of main: %d\n", a);

    {
        auto int a;
        a = 20;
        printf("A of a block inside main: %d", a);
    }
    
    return 0;
}