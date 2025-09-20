#include <stdio.h>

int main()
{
    char name[20] = "Ronak D Jani";

    printf("%s\n", name); // Default formatting
    printf("%20s\n", name); // Right-aligned in a field of width 20
    printf("%-20s\n", name); // Left-aligned in a field of width 20
    printf("%.5s\n", name); // Print only first 5 characters
    printf("%20.10s\n", name); // Right-aligned in a field of width 20, first 10 characters
    printf("%-20.10s\n", name); // Left-aligned in a field of width 20, first 10 characters
    printf("%*.*s\n", 20, 7, name); // Dynamic width and precision

    return 0;
}