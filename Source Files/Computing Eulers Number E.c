#include <stdio.h>

int main()
{
    double e = 1.0;           // Initialize e with first term (1/0! = 1)
    double term = 1.0;        // Current term in the series
    double previous_e = 0.0;  // Previous value of e
    int n = 1;                // Factorial counter
    
    printf("Computing Euler's number e...\n\n");
    
    // Loop until difference between successive values < 0.00001
    while((e - previous_e) >= 0.00001)
    {
        previous_e = e;       // Store current e value
        term /= n;            // Calculate next term: term/n gives 1/n!
        e += term;            // Add term to e
        n++;                  // Increment counter
        
        printf("After term %d: e = %.10f, difference = %.10f\n", n-1, e, e - previous_e);
    }
    
    printf("\nFinal value of e = %.10f\n", e);
    printf("Number of terms used: %d\n", n-1);
    printf("Actual value of e is equivalent to 2.718281828\n");
    
    return 0;
}
