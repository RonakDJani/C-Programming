#include <stdio.h>

int main()
{
    int a, b, c, d, m, n, x1, x2, denominator;

    printf("Solution for two linear equations.\n");
    printf("ax1 + bx2 = m");
    printf("Enter values for a, b and m: ");
    scanf("%d %d %d", &a, &b, &m);
    printf("Enter values for c, d and n: ");
    scanf("%d %d %d", &c, &d, &n);

    if(((a * d) - (c * b)) == 0)
    {
        printf("Can't go further! Because (a * d) - (c * b) is equals to 0.\n");
    }
    else
    {
        denominator = ((a * d) - (c * b));
        
        x1 = ((m * d) - (b * n)) / denominator;
        x2 = ((n * a) - (m * c)) / denominator;

        if((a * x1) + (b * x2) == m && ((c * x1) + (d * x2)) == n)
        {
            printf("ax1 + bx2 = m and cx1 + dx2 = n\n");
        }
        else
        {
            printf("Imaginary line equations!\n");
        }
    }
}