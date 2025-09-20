#include <stdio.h>

int main()
{
    char ch = 'A';

    printf("%c\n", ch); // Default formatting
    printf("%5c\n", ch); // Right-aligned in a field of width 5
    printf("%-5c\n", ch); // Left-aligned in a field of width 5
    printf("%*c\n", 3, ch); // Dynamic width

    return 0;
}