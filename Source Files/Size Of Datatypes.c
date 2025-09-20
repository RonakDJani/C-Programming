#include <stdio.h>

int main()
{
    printf("Size of datatypes:\n");
    printf("SHORT INT: %d bytes\n", sizeof(short int));
    printf("INT: %d bytes\n", sizeof(int));
    printf("LONG INT: %d bytes\n", sizeof(long int));
    printf("UNSIGNED SHORT INT: %d bytes\n", sizeof(unsigned short int));
    printf("UNSIGNED INT: %d bytes\n", sizeof(unsigned int));
    printf("UNSIGNED LONG INT: %d bytes\n", sizeof(unsigned long int));
    printf("SIGNED SHORT INT: %d bytes\n", sizeof(signed short int));
    printf("SIGNED INT: %d bytes\n", sizeof(signed int));
    printf("SIGNED LONG INT: %d bytes\n", sizeof(signed long int));
    printf("LONG LONG INT: %d bytes\n", sizeof(long long int));
    printf("UNSIGNED LONG LONG INT: %d bytes\n", sizeof(unsigned long long int));
    printf("SIGNED LONG LONG INT: %d bytes\n", sizeof(signed long long int));
    printf("FLOAT: %d bytes\n", sizeof(float));
    printf("DOUBLE: %d bytes\n", sizeof(double));
    printf("LONG DOUBLE: %d bytes\n", sizeof(long double));
    printf("CHAR: %d byte\n", sizeof(char));
    printf("UNSIGNED CHAR: %d byte\n", sizeof(unsigned char));
    printf("SIGNED CHAR: %d byte\n", sizeof(unsigned char));
    
    return 0;
}