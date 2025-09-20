#include <stdio.h>
#include <ctype.h>

int main()
{
    char character;

    printf("Enter a character: ");
    putchar('\n'); // Print a newline for better formatting

    character = getchar();

    if(isupper(character) > 0)
    {
        printf("The character '%c' in reverse case is '%c'.\n", character, tolower(character));
    }
    else if(islower(character) > 0)
    {
        printf("The character '%c' in reverse case is '%c'.\n", character, toupper(character));
    }
    else
    {
        printf("The character '%c' is not an alphabet.\n", character);
    }

    return 0;
}