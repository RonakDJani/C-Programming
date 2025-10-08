#include <stdio.h>
#include <string.h>

int main()
{
    char binary[100], ones[100], twos[100];
    int length, i, carry = 1;
    
    // Input binary number
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    length = strlen(binary);
    
    // Step 1: Find one's complement (flip all bits)
    printf("\nOriginal binary number: %s\n", binary);
    
    for(i = 0; i < length; i++)
    {
        if(binary[i] == '0')
        {
            ones[i] = '1';
        }
        else if(binary[i] == '1')
        {
            ones[i] = '0';
        }
    }

    ones[length] = '\0';
    
    printf("One's complement:       %s\n", ones);
    
    // Step 2: Add 1 to one's complement to get two's complement
    for(i = length - 1; i >= 0; i--)
    {
        if(ones[i] == '1' && carry == 1)
        {
            twos[i] = '0';
            // carry remains 1
        }
        else if(ones[i] == '0' && carry == 1)
        {
            twos[i] = '1';
            carry = 0;
        }
        else
        {
            twos[i] = ones[i];
        }
    }
    
    twos[length] = '\0';
    
    printf("Two's complement:       %s\n", twos);
    
    return 0;
}