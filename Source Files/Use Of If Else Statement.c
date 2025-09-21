#include <stdio.h>

#define ACCURACY 0.0001

// The power series expansion of e^x is an infinite sum that starts with 1, then adds x, then x²/2!, then x³/3!, and so on.

int main()
{
    int n, count;
    float x, term, sum;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    n = term = sum = count = 1; // Initialize variables

    while(n <= 100)
    {
        term = term * x / n; // Calculate the next term in the series
        sum = sum + term; // Add the term to the sum
        count++;

        if(term < ACCURACY)
        {
            n = 999; // Exit condition
        }
        else
        {
            n = n + 1;
        }
    }

    printf("Term: %d\tSum: %f\n", count, sum);

    return 0;
}