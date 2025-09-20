#include <stdio.h>

float mathExpression(float x, float y, float z);

int main()
{
    int a = 250, b = 85, c = 25;
    float x = mathExpression(a, b, c);

    printf("The math expression x = a / (b - c).\n%d / (%d - %d) = %f\n", a, b, c, x);
    
    return 0;
}

float mathExpression(float x, float y, float z)
{
    return(x / (y - z));
}