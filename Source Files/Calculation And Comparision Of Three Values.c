#include <stdio.h>

int main()
{
    int a, b, c, sum, average, largest, smallest;

    printf("Enter values for a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    average = sum / 3;
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("Sum: %d\n", sum);
    printf("Average: %d\n", average);
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}