#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    switch(marks / 10)
    {
        case 10:
        case 9:
        case 8:
        {
            printf("Grade: Honours\n");
            break;
        }
        case 7:
        case 6:
        {
            printf("Grade: First Division\n");
            break;
        }
        case 5:
        {
            printf("Grade: Second Division\n");
            break;
        }
        case 4:
        {
            printf("Grade: Third Division\n");
            break;
        }
        default:
        {
            printf("Grade: Fail\n");
            break;
        }
    }

    return 0;
}