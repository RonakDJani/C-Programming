#include <stdio.h>
#include <conio.h>

void main()
{
    float c, f;

    c = 38;
    f = c * 9 / 5 + 32;
    printf("%.2f Celsius to %.2f Fahrenheit\n", c, f);

    f = 89;
    c = 5 * (f - 32) / 9;
    printf("%.2f Fahrenheit to %.2f Celsius", f, c);
    getch();
}