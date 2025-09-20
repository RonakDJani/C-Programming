#include <stdio.h>

int main()
{
    int a, b, c, largest;

    printf("Enter a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Largest of three values: %d\n", largest);

    return 0;
}