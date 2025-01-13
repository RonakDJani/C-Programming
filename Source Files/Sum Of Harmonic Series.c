#include <stdio.h>
#include <conio.h>

double harmonic_sum(int n);

void main()
{
    int n;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("The number of terms must be greater than 0.");
    }
    else
    {
        double result = harmonic_sum(n);
        printf("The sum of harmonic series up to %d terms is %.5f", n, result);
    }
    getch();
}

double harmonic_sum(int n)
{
    double sum = 0.0;

    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
        printf("%3d term value: %.5f\n", i, sum);
    }
    return sum;
}