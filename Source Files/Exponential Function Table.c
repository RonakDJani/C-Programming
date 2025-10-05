#include <stdio.h>
#include <math.h> // Required for the exp() function

// Define the boundaries for the calculation
#define X_MIN 0.0
#define X_MAX 10.0
#define ROW_STEP 1.0 // Base step for rows (0.0, 1.0, 2.0, ...)
#define COL_STEP_START 0.1 // Starting step for columns (+0.1)
#define COL_STEP_END 0.9   // Ending step for columns (+0.9)

void print_separator();

int main()
{
    double base_x;       // Base X value for the row label (e.g., 0.0, 1.0, 2.0)
    double step_c;       // Column increment (0.1, 0.2, 0.3, ...)
    double current_x;    // The actual X value: base_x + step_c
    double y_value;      // The result of exp(-x)

    printf("Table for Y = EXP(-X) where X varies from %.1f to %.1f\n", X_MIN, X_MAX);

    // --- Print Header ---
    print_separator();

    printf("|  x   |");

    // Print column headers from 0.1 to 0.9
    for (step_c = COL_STEP_START; step_c <= COL_STEP_END + 1e-9; step_c += 0.1)
    {
        printf(" %-7.1f |", step_c);
    }

    printf("\n");

    print_separator();

    // --- Loop through the rows (Base X values: 0.0, 1.0, ..., 10.0) ---
    // We add 1e-9 (a small tolerance) to the loop condition to account for floating-point inaccuracies
    for (base_x = X_MIN; base_x <= X_MAX + 1e-9; base_x += ROW_STEP)
    {
        // Print the row label (Base X value), formatted to one decimal place
        printf("| %-4.1f |", base_x);

        // Loop through the columns (Steps: 0.1, 0.2, ..., 0.9)
        for (step_c = COL_STEP_START; step_c <= COL_STEP_END + 1e-9; step_c += 0.1)
        {
            current_x = base_x + step_c;

            // Check if the calculated X value is still within the required range (up to 10.0)
            if (current_x <= X_MAX + 1e-9)
            {
                // Calculate y = exp(-x)
                y_value = exp(-current_x);
                
                // Print the result, formatted to 4 decimal places
                printf(" %-7.4f |", y_value);
            }
            else
            {
                // If x > 10.0 (e.g., trying to calculate 10.1), print a placeholder
                printf(" ------- |");
            }
        }

        printf("\n");
        
        print_separator();
    }

    return 0;
}

void print_separator()
{
    // Prints a clean separator line for table structure
    printf("+------+---------+---------+---------+---------+---------+---------+---------+---------+---------+\n");
}