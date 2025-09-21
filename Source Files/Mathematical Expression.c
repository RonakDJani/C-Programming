#include <stdio.h>

int main()
{
    int x, y;
    float result;

    printf("   x + y     x + y\n");
    printf("1. %c%c%c%c%c  2. %c%c%c%c%C  3. (x + y) (x - y)\n", 196, 196, 196, 196, 196, 196, 196, 196, 196, 196);
    printf("   x - y       2\n\n");
    printf("Enter values for x and y: ");
    scanf("%d %d", &x, &y);

    // 1. Expression: (x + y) / (x - y)
    result = (float)(x + y) / (x - y);

    printf("\n   %d + %d\n", x, y);
    printf("1. %c%c%c%c%c = %.2f\n", 196, 196, 196, 196, 196, result);
    printf("   %d - %d\n\n", x, y);

    // 2. Expression: (x + y) / 2
    result = (float)(x + y) / 2;

    printf("   %d + %d\n", x, y);
    printf("2. %c%c%c%c%c = %.2f\n", 196, 196, 196, 196, 196, result);
    printf("     2\n\n");

    // 3. Expression: (x + y) * (x - y)
    result = (float)(x + y) * (x - y);

    printf("3. (%d + %d) (%d - %d) = %.2f\n", x, y, x, y, result);

    return 0;

}