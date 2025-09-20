#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;

    printf("Enter an integer, a float and a character separated by spaces: ");
    if(scanf("%d %f %c", &a, &b, &c) == 3) // Check if all three inputs are successfully read
    {
        printf("The values you entered are: %d, %f, %c\n", a, b, c);
    }
    else
    {
        printf("Error: Invalid input. Please enter an integer, a float and a character.\n");
    }

    return 0;
}