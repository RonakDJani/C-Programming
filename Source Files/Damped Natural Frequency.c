#include <stdio.h>
#include <math.h>

int main() {
    // Define the constant values for Inductance (L) and Resistance (R)
    // These are example values; you can change them as needed.
    const double L = 10.0; // Inductance in Henries
    const double R = 5.0;  // Resistance in Ohms
    
    // Declare variables for Capacitance (C) and the calculated frequency
    double C, frequency, discriminant;

    printf("Calculating Damped Natural Frequency (f) vs. Capacitance (C)\n");
    printf("Inductance (L) = %.2f H\n", L);
    printf("Resistance (R) = %.2f Ohms\n", R);
    printf("----------------------------------------\n");
    printf("  C (Farads)   |  Frequency (Hz)\n");
    printf("----------------------------------------\n");

    // Loop through values of C from 0.01 to 0.10, with steps of 0.01
    // The loop condition uses a small tolerance to handle floating-point inaccuracies
    for (C = 0.01; C <= 0.10 + 1e-9; C += 0.01)
    {
        // Calculate the term inside the square root
        discriminant = (1.0 / (L * C)) - (pow(R, 2) / (4.0 * pow(C, 2)));

        // Check if the value inside the square root is non-negative
        if (discriminant >= 0.0)
        {
            frequency = sqrt(discriminant);
            printf("  %.4f       |  %.4f\n", C, frequency);
        }
        else
        {
            // This case indicates an overdamped or critically damped circuit, where
            // the frequency becomes imaginary. The circuit does not oscillate.
            printf("  %.4f       |  (Imaginary frequency - No oscillation)\n", C);
        }
    }

    printf("----------------------------------------\n");

    return 0;
}