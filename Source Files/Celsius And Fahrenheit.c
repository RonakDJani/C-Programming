#include <stdio.h>

int main()
{
    float c, f;

    c = 38;
    f = c * 9 / 5 + 32;
    printf("%.2f Celsius equals to %.2f Fahrenheit\n", c, f);

    f = 89;
    c = (f - 32) * 5 / 9;
    printf("%.2f Fahrenheit equals to %.2f Celsius", f, c);

    return 0;
}