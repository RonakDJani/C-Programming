#include <stdio.h>

int main()
{
    char character;

    printf("Would you like to know my name?\n");
    printf("Press 'Y' for yes and N' for no: ");

    character = getchar();

    if(character =='Y' || character =='y')
    {
        printf("My name is Ronak D Jani.\n");
    }
    else
    {
        printf("You are good for nothing.\n");
    }

    return 0;
}