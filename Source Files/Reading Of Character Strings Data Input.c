#include <stdio.h>

int main()
{
    int number;
    char name1[15], name2[15], name3[15];

    printf("Enter serial number and name 1: ");
    scanf("%d %15c", &number, name1);
    printf("The serial number and name 1 you entered are: %d and %15s\n\n", number, name1);

    printf("Enter serial number and name 2: ");
    scanf("%d %s", &number, name2);
    printf("The serial number and name 2 you entered are: %d and %15s\n\n", number, name2);

    printf("Enter serial number and name 3: ");
    scanf("%d %15s", &number, name3);
    printf("The serial number and name 3 you entered are: %d and %15s\n", number, name3);
}