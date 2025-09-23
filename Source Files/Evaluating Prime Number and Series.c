#include <stdio.h>
#include <math.h>

// Function prototypes
void checkPrimeNumber(int x);
void printPrimeSeries(int start, int end);

int main()
{
    int number, series_start, series_end, option;

    printf("1. Check if a number is prime\n");
    printf("2. Print a series of prime numbers\n");
    printf("Enter your option: ");
    scanf("%d", &option);

    switch (option)
    {
        case 1:
        {
            printf("Enter a positive number: ");
            scanf("%d", &number);

            checkPrimeNumber(number);

            break;
        }
        case 2:
        {
            printf("Enter values for start and end of series: ");
            scanf("%d %d", &series_start, &series_end);

            printPrimeSeries(series_start, series_end);

            break;
        }
        default:
        {
            printf("Invalid option selected!\n");

            break;
        }
    }

    return 0;
}

// Function to check a single number for primality
void checkPrimeNumber(int number)
{
    int i, isPrime = 1;

    // Numbers less than or equal to 1 are not prime
    if (number <= 1)
    {
        isPrime = 0;
    }
    else
    {
        // We only need to check for divisors up to the square root of the number.
        for (i = 2; i * i <= number; ++i)
        { // Optimized loop condition
            if (number % i == 0)
            {
                isPrime = 0; // Found a divisor, not prime

                break;       // Exit the loop early for efficiency
            }
        }
    }

    if (isPrime == 1)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }
}

// Function to find and print a series of prime numbers
void printPrimeSeries(int start, int end)
{
    int i, j;
    int count = 0;

    // Handle invalid range
    if (start > end)
    {
        printf("Start value cannot be greater than end value.\n");

        return; // Exit the function
    }
    
    printf("Prime numbers between %d and %d are:\n", start, end);

    // Loop through each number in the given range
    for (i = start; i <= end; ++i)
    {
        int isPrime = 1; // CRITICAL: Reset the flag for each new number

        // Numbers less than or equal to 1 are not prime
        if (i <= 1)
        {
            isPrime = 0;
        }
        else
        {
            // Check for primality up to the square root of the current number
            for (j = 2; j * j <= i; ++j)
            { // Optimized loop condition
                if (i % j == 0)
                {
                    isPrime = 0; // Not a prime number

                    break;       // Exit inner loop
                }
            }
        }

        // If the number is prime, print it
        if (isPrime == 1)
        {
            printf("%d\n", i);

            count++;
        }
    }
    
    // Check if any prime numbers were found
    if (count == 0)
    {
        printf("No prime numbers found in this range.\n");
    }
    else
    {
        printf("Total prime number in series: %d\n", count);
    }
}