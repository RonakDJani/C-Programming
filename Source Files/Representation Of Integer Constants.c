#include <stdio.h>

int main()
{
    printf("Integer values:\n");
    printf("%d %d %d\n\n", 32767, 32767+1, 32767+10);
    printf("Long integer values:\n");
    printf("%ld %ld %ld", 32767L, 32767L+1L, 32767L+10L);
    
    return 0;
}