#include <stdio.h>

int main()
{
    int x, y;
    short int z;

    x = 123456;
    y = 654321;
    z = x + y;

    printf("Value of x (int): %d\n", x);
    printf("Value of y (int): %d\n", y);
    printf("Value of z (short int): %d\n", z);
    printf("\n*** COMMENTS ***\nThe range of short int is typically from -32,768 to 32,767 (platform-dependent).\n");
    printf("The sum of 123456 and 654321 is 777777, which exceeds this range.\n");
    printf("As a result, the value of z wraps around due to overflow, resulting in an incorrect value (%d in this case).", z);

    return 0;
}