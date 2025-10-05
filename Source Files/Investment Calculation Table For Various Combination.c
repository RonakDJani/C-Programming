#include <stdio.h>
#include <math.h>

// Increased array size slightly to be safer, and renamed for clarity.
#define MAX_SIZE 20 

// IMPORTANT: Use double for financial calculations to ensure precision.
// The Period array stores integers (years).

int main()
{
    double principal[MAX_SIZE], interest[MAX_SIZE];
    int period[MAX_SIZE];
    
    int i; // Loop index for input
    int count_p = 0; // Number of valid Principal inputs
    int count_r = 0; // Number of valid Rate inputs
    int count_n = 0; // Number of valid Period inputs
    
    // Temporary variables for reading user input
    double input_f; 
    int input_i;
    int total_combinations;

    printf("================ Investment Value Calculator ================\n");
    
    // --- 1. Principal Input ---
    printf("\nEnter Principal amounts (P). Enter -1 to terminate input (Max %d):\n", MAX_SIZE);

    i = 0;
    
    while (i < MAX_SIZE)
    {
        printf("P[%d]: ", i + 1);

        if (scanf("%lf", &input_f) != 1) 
        {
            break; // Robust input check
        }

        if (input_f == -1.0)
        {
            break;
        }

        principal[i] = input_f;
        count_p++;
        i++;
    }

    // --- 2. Interest Rate Input ---
    printf("\nEnter Annual Interest Rates (r in %%). Enter -1 to terminate input (Max %d):\n", MAX_SIZE);
    printf("NOTE: Enter 5 for 5%% (Program converts to 0.05).\n");

    i = 0;

    while (i < MAX_SIZE)
    {
        printf("R[%d]: ", i + 1);

        if (scanf("%lf", &input_f) != 1)
        {
            break;
        }

        if (input_f == -1.0)
        {
            break;
        }

        // CRITICAL FIX: Convert percentage (e.g., 5.0) to decimal (0.05) immediately
        interest[i] = input_f / 100.0;
        count_r++;
        i++;
    }

    // --- 3. Period (Years) Input ---
    printf("\nEnter Period in Years (n). Enter -1 to terminate input (Max %d):\n", MAX_SIZE);
    i = 0;
    while (i < MAX_SIZE)
    {
        printf("N[%d]: ", i + 1);

        // Note: Using %d for integer years
        if (scanf("%d", &input_i) != 1)
        {
            break; 
        }

        if (input_i == -1)
        {
            break;
        }

        period[i] = input_i;
        count_n++;
        i++;
    }

    // Check for sufficient input
    if (count_p == 0 || count_r == 0 || count_n == 0)
    {
        printf("\nError: Please enter at least one value for Principal, Rate, and Years.\n");
        return 1;
    }

    total_combinations = count_p * count_r * count_n;

    // -------------------------------------------------------------------------
    // Output the formatted table header
    // -------------------------------------------------------------------------
    
    printf("\n\n==================================================================\n");
    printf("|         COMPOUND INVESTMENT VALUE (V = P * (1 + r)^n)          |\n");
    printf("|          (Generating %d results based on your input)            |\n", total_combinations);
    printf("==================================================================\n");
    // Updated header spacing for clarity
    printf("| %-12s | %-12s | %-10s | %-18s |\n", "Principal (P)", "Rate (r)", "Years (n)", "Future Value (V)");
    printf("|---------------|--------------|------------|--------------------|\n");

    // -------------------------------------------------------------------------
    // Calculation Loop (Three Nested Loops)
    // -------------------------------------------------------------------------

    // Loop 1: Principal (i)
    for(int i_p = 0; i_p < count_p; i_p++)
    {
        double P = principal[i_p];

        // Loop 2: Interest Rate (j)
        for(int j_r = 0; j_r < count_r; j_r++)
        {
            double r = interest[j_r]; // Correctly access the j-th rate
            double r_percent = r * 100.0; // For printing 

            // Loop 3: Period (k)
            // CRITICAL FIX: Added the third nested loop for all Period values.
            for(int k_n = 0; k_n < count_n; k_n++)
            {
                int n = period[k_n]; // Correctly access the k-th period
                double future_value;

                // V = P * (1 + r)^n
                future_value = P * pow(1.0 + r, n);

                // Print the result row
                // Print rate as a percentage for readability (r_percent)
                printf("| Rs.%-10.2lf | %-11.2lf%% | %-10d | Rs.%-15.2lf |\n", P, r_percent, n, future_value);
            }
        }
    }

    printf("==================================================================\n");
    
    return 0;
}