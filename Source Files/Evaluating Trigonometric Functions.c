#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    char t;

    printf("S for sin(x)\nC for cos(x)\nT for tan(x): ");
    scanf("%c", &t);

    printf("Enter radian angle(x): ");
    scanf("%lf", &x);

    switch(t)
    {
        case 'S':
        case 's':
        {
            printf("sin(%lf) is %lf\n", x, sin(x));

            break;
        }
        case 'C':
        case 'c':
        {
            printf("cos(%lf) is %lf\n", x, cos(x));

            break;
        }
        case 'T':
        case 't':
        {
            printf("tan(%lf) is %lf\n", x, tan(x));

            break;
        }
        default:
        {
            printf("Invalid option selected!\n");
        }
    }

    return 0;
}