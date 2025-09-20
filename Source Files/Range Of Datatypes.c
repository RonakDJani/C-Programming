#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    int var1 = INT_MIN;
    int var2 = INT_MAX;
    unsigned var3 = 0;
    unsigned var4 = UINT_MAX;
    short int var5 = SHRT_MIN;
    short int var6 = SHRT_MAX;
    unsigned short int var7 = 0;
    unsigned short int var8 = USHRT_MAX;
    long int var9 = LONG_MIN;
    long int var10 = LONG_MAX;
    unsigned long int var11 = 0;
    unsigned long int var12 = ULONG_MAX;
    long long int var13 = LLONG_MIN;
    long long int var14 = LLONG_MAX;
    unsigned long long int var15 = 0;
    unsigned long long int var16 = ULLONG_MAX;
    char var17 = CHAR_MIN;
    char var18 = CHAR_MAX;
    unsigned char var19 = 0;
    unsigned char var20 = UCHAR_MAX;
    float var21 = FLT_MIN;
    float var22 = FLT_MAX;
    double var23 = DBL_MIN;
    double var24 = DBL_MAX;
    long double var25 = LDBL_MIN;
    long double var26 = LDBL_MAX;
    printf("Range of variables:\n");
    printf("INT: %d to %d\n", var1, var2);
    printf("UNSIGNED INT: %u to %u\n", var3, var4);
    printf("SHORT INT: %d to %d\n", var5, var6);
    printf("UNSIGNED SHORT INT: %u to %u\n", var7, var8);
    printf("LONG INT: %ld to %ld\n", var9, var10);
    printf("UNSIGNED LONG INT: %lu to %lu\n", var11, var12);
    printf("LONG LONG INT: %lld to %lld\n", var13, var14);
    printf("UNSIGNED LONG LONG INT: %llu to %llu\n", var15, var16);
    printf("CHAR: %d to %d\n", var17, var18);
    printf("UNSIGNED CHAR: %d to %d\n", var19, var20);
    printf("FLOAT: %e to %e\n", var21, var22);
    printf("DOUBLE: %le to %le\n", var23, var24);
    printf("LONG DOUBLE: %Le to %Le\n", var25, var26);
    
    return 0;
}