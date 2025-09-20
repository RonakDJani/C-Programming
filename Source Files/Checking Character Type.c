#include <stdio.h>
#include <ctype.h>

int main()
{
    char character;

    printf("Enter a character: ");
    
    character = getchar();

    if(isalpha(character) > 0)
    {
        printf("The character '%c' is an alphabet.\n", character);
    }
    else if(isdigit(character) > 0)
    {
        printf("The character '%c' is a digit.\n", character);
    }
    else
    {
        printf("The character '%c' is a alphanumeric character.\n", character);
    }

    return 0;
}