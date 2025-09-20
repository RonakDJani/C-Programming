#include <stdio.h>

int main()
{
    char address[80];

    printf("Enter your address with pincode: ");
    scanf("%[A-Za-z0-9, ]", address); // Read a string of uppercase letters
    printf("The address you entered is: %s\n", address);

    return 0;
}