#include <stdio.h>

int main()
{
    char str1[20], str2[20];

    printf("Enter a string: ");
    scanf("%4s %s", str1, str2);
    printf("%s %s\n", str1, str2);
    printf("%s\n%s\n", str1, str2); 
    printf("%c.%c.\n", str1[0], str2[0]);

    return 0;
}