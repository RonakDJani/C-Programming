#include <stdio.h>
#include <math.h>

#define MIN_VALUE 0
#define MAX_VALUE 100
#define STEP 10

int main()
{
    int value, square;
    double square_root;

    printf("Value | Square Root | Square\n");
    printf("-----------------------------\n");
    for(value =MIN_VALUE; value <= MAX_VALUE; value += STEP)
    {
        square_root = sqrt(value);
        square = pow(value, 2);
        printf(" %3d  |  %9.4f  |  %5d\n", value, square_root, square);
    }

    printf("-----------------------------\n");

    return 0;
}