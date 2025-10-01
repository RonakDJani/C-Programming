#include <stdio.h>

int main()
{
    long p;
    int n;
    double q;

    printf("-----------------------------------------------------\n");
    printf("2 to power n\t\tn\t\t2 to power -n\n");
    printf("-----------------------------------------------------\n");

    for(n = 0; n <= 20; ++n)
    {
        if(n == 0)
        {
            p = 1;
        }
        else
        {
            p = p * 2;
            q = 1.0 / (double)p;
        }

        printf("%12ld\t%9d\t%21.12lf\n", p, n, q);
    }

    printf("-----------------------------------------------------\n");

    return 0;
}