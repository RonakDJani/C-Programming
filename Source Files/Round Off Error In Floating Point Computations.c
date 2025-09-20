#include <stdio.h>

int main()
{
    float sum, n, term;
    
    int count = 1;
    sum = 0;

    printf("Enter the value of N: ");
    scanf("%f", &n);

    term = 1.0/n;

    while(count <= n)
    {
        sum = sum + term;
        count++;
    }

    printf("Sum = %f\n", sum);
    printf("In essence, the program is multiplying the term (1/n) by n and should ideally always result in a sum of 1.0 (or a value very close to it due to floating-point inaccuracies).");

    return 0;
}