#include <stdio.h>

int gcd(int a, int b);

int main()
{
    int a, b;

    printf("Enter two positive integers to find their Greatest Common Divisor (GCD): ");
    scanf("%d %d", &a, &b);

    // Handle non-positive inputs
    if (a <= 0 || b <= 0)
    {
        printf("Error: Please enter positive integers.\n");
    }
    else
    {
        printf("The GCD of %d and %d is: %d\n", a, b, gcd(a, b));
    }

    return 0;
}

// Function to find the Greatest Common Divisor using the Euclidean algorithm
int gcd(int a, int b)
{
    // The base case: if b is 0, a is the GCD
    if (b == 0)
    {
        return a;
    }
    // Recursive step: call gcd with b and the remainder of a divided by b
    return gcd(b, a % b);
}