#include <stdio.h>

#define MAX 100

int main()
{
    int n, i;
    float x[MAX], y[MAX];
    float sum_x, sum_y, sum_xy, sum_x2;
    float m, c;

    sum_x = sum_y = sum_xy = sum_x2 = 0;

    printf("Enter the number of points:");
    scanf("%d", &n);
    printf("Enter the points (x, y):\n");

    // Input x and y coordinates
    for(i = 0; i < n; i++)
    {
        printf("Point %d: ", i + 1);
        scanf("%f %f", &x[i], &y[i]);
    }

    // Calculate summations
    for(i = 0; i < n; i++)
    {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
    }

    // Calculate slope (m)
    m = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);

    // Calculate intercept (c)
    c = (sum_y - m * sum_x) / n;

    printf("\nSum of x: %.2f\n", sum_x);
    printf("Sum of y: %.2f\n", sum_y);
    printf("Sum of x * y: %.2f\n", sum_xy);
    printf("Sum of x^2: %.2f\n", sum_x2);
    printf("\nSlope (m): %.4f\n", m);
    printf("Intercept (c): %.4f\n", c);
    printf("\nThe equation of the straight line is:\n");
    printf("y = %.4fx + %.4f\n", m, c);

    return 0;
}