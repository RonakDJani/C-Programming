#include <stdio.h>

int main()
{
    typedef int quantity;
    typedef float lenght;

    quantity q1, q2;
    lenght l1, l2;

    q1 = 10, q2 = 15;
    l1 = 12.6, l2 = 22.36;

    printf("Quantity of Q1 and Q2: %d and %d\n", q1, q2);
    printf("Lenght of L1 and L2: %.2f and %.2f\n", l1, l2);
    
    return 0;
}