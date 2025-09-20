#include <stdio.h>

int main()
{
    int a, b, c, d;
    a = 15;
    b = 10;
    c = ++a - b;
    
    printf("A = %d\tB = %d\tC = %d\n", a, b, c);

    d = b++ + a;

    printf("A = %d\tB = %d\tD = %d\n", a, b, d);
    printf("A / B = %d\n", a / b);
    printf("A %% B = %d\n", a % b);
    printf("A *= B = %d\n", a *= b);
    printf("C > D = %d\n", (c > d) ? 1 : 0);
    printf("C < D = %d", (c < d) ? 1 : 0);
    getchar();
    
    return 0;
}