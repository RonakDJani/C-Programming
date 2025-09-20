#include <stdio.h>

int main()
{
    char address[80];

    printf("Enter your address: ");
    scanf("%[^\n]", address); // Read a string including newline characters
    printf("The address you entered is: %s\n", address);

    return 0;
}