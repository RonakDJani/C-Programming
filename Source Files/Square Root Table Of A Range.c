#include <stdio.h>
#include <math.h>

int main() {
    printf("     |  0.00  |  0.10  |  0.20  |  0.30  |  0.40  |  0.50  |  0.60  |  0.70  |  0.80  |  0.90  |\n");
    printf("-----|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n");

    // The outer loop handles the integer part (from 0 to 9)
    for (int i = 0; i < 10; i++) {
        // Print the row header for the integer part
        printf(" %.1f |", (double)i);

        // The inner loop handles the decimal part (from 0 to 9)
        for (int j = 0; j < 10; j++) {
            // Calculate the number by combining the integer and decimal parts
            double number = i + (double)j / 10.0;
            // Calculate the square root of the number
            double square_root = sqrt(number);
            // Print the result with 4 decimal places, formatted for the table
            printf(" %6.4f |", square_root);
        }
        printf("\n");
    }
    printf("-----|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n");

    return 0;
}