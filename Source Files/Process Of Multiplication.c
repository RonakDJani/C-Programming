#include <stdio.h>

int main()
{
    int num1, num2, v1, v2, product;

    printf("Enter two 2-digit integers for multiplication: ");
    scanf("%d %d", &num1, &num2);

    v1 = num2 / 10;
    v2 = num2 % 10;

    printf("\n%14d\n", num1);
    printf("x %12d\n", num2);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196);
    printf("%d x %d = %5d\n", v2, num1, v2 * num1);
    printf("%d x %d = %4dx\n", v1, num1, v1 * num1);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196);

    product = ((v1 * num1) * 10) + (v2 * num1);

    printf("Total %8d\n", product);

    return 0;
}