#include <stdio.h>

int main()
{
    char month[12][20] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int i;

    printf("Enter month number (1-12): ");
    scanf("%d", &i);

    switch(i)
    {
        case 1:
        {
            printf("Month: %s\n", month[0]);
            break;
        }
        case 2:
        {
            printf("Month: %s\n", month[1]);
            break;
        }
        case 3:
        {
            printf("Month: %s\n", month[2]);
            break;
        }
        case 4:
        {
            printf("Month: %s\n", month[3]);
            break;
        }
        case 5:
        {
            printf("Month: %s\n", month[4]);
            break;
        }
        case 6:
        {
            printf("Month: %s\n", month[5]);
            break;
        }
        case 7:
        {
            printf("Month: %s\n", month[6]);
            break;
        }
        case 8:
        {
            printf("Month: %s\n", month[7]);
            break;
        }
        case 9:
        {
            printf("Month: %s\n", month[8]);
            break;
        }
        case 10:
        {
            printf("Month: %s\n", month[9]);
            break;
        }
        case 11:
        {
            printf("Month: %s\n", month[10]);
            break;
        }
        case 12:
        {
            printf("Month: %s\n", month[11]);
            break;
        }
        default:
        {
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            break;
        }
    }

    return 0;
}