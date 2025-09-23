#include <stdio.h>
#include <math.h>

int main()
{
    int hypotenuse, base, height, temp1, temp2;

    printf("Enter values to evaluate right angle triangle for hypotenuse, base and height: ");
    scanf("%d %d %d", &hypotenuse, &base, & height);

    temp1 = pow(hypotenuse, 2);
    temp2 = pow(base, 2) + pow(height, 2);

    if(temp1 == temp2)
    {
        printf("This is right angle triangle.\nBecause a^2 + b^2(%d) = c^2(%d)\n", temp1, temp2);
    }
    else
    {
        printf("This not a right angle triangle.\nBecause a^2 + b^2(%d) != c^2(%d)\n", temp1, temp2);
    }

    return 0;
}