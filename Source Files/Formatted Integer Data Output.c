#include <stdio.h>

int main()
{
    int m = 12345;
    long n = 987654;

    printf("%d\n", m); // Default formatting
    printf("%10d\n", m); // Right-aligned in a field of width 10
    printf("%010d\n", m); // Right-aligned, padded with leading zeros
    printf("%-10d\n", m); // Left-aligned in a field of width 10
    printf("%+d\n", m); // Always show sign
    printf("% d\n", m); // Leading space for positive numbers
    printf("%10d\n", -m); // Right-aligned in a field of width 10 for negative
    printf("%ld\n", n); // Default formatting for long
    printf("%10ld\n", n); // Right-aligned in a field of width 10 for long
    printf("%010ld\n", n); // Right-aligned, padded with leading zeros for long
    printf("%-10ld\n", n); // Left-aligned in a field of width 10 for long
    printf("%+ld\n", n); // Always show sign for long
    printf("% ld\n", n); // Leading space for positive long numbers
    printf("%10ld\n", -n); // Right-aligned in a field of width 10 for negative long

    return 0;
}