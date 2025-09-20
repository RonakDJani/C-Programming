#include <stdio.h>

int main()
{
    float x = 98.7654;

    printf("%f\n", x); // Default formatting
    printf("%7.4f\n", x); // Right-aligned in a field of width 7 with 4 decimal places
    printf("%7.2f\n", x); // Right-aligned in a field of width 7 with 2 decimal places
    printf("%07.2f\n", x); // Right-aligned, padded with leading zeros
    printf("%-7.2f\n", x); // Left-aligned in a field of width 7 with 2 decimal places
    printf("%+7.2f\n", x); // Always show sign
    printf("% 7.2f\n", x); // Leading space for positive numbers
    printf("%7.2f\n", -x); // Right-aligned in a field of width 7 for negative
    printf("%*.*f\n", 7, 2, x); // Dynamic width and precision
    printf("%e\n", x); // Scientific notation
    printf("%E\n", x); // Scientific notation with uppercase 'E'
    printf("%10.2e\n", x); // Right-aligned in a field of width 10 with 2 decimal places in scientific notation
    printf("%12.4e\n", x); // Right-aligned in a field of width 12 with 4 decimal places in scientific notation
    printf("%-12.4e\n", x); // Left-aligned in a field of width 12 with 4 decimal places in scientific notation
    printf("%+12.4e\n", x); // Always show sign in scientific notation
    printf("% 12.4e\n", x); // Leading space for positive numbers in scientific notation
    printf("%12.4e\n", -x); // Right-aligned in a field of width 10 for negative in scientific notation
    printf("%*.*e\n", 12, 4, x); // Dynamic width and precision in scientific notation

    return 0;
}