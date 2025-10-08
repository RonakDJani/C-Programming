#include <stdio.h>
#include <string.h>

int main()
{
    char string[20], con_string[20];
    int i, lenght;

    printf("Converting string of characters (UPPERCASE or lowercase).\n");
    printf("Enter String: ");
    scanf("%[^\n]", string);

    lenght = strlen(string);
    
    for(i = 0; i < lenght; i++)
    {
        if(string[i] == 32)
        {
            con_string[i] = string[i];
        }
        else if(string[i] >= 65 && string[i] <= 90)
        {
            con_string[i] = (string[i] + 32);
        }
        else if(string[i] >= 97 && string[i] <= 122)
        {
            con_string[i] = (string[i] - 32);
        }
        else
        {
            con_string[i] = 32;
        }
    }

    printf("Converted string: %s", con_string);

    return 0;
}