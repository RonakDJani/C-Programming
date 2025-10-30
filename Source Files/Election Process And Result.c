#include <stdio.h>

int main()
{
    int i, vote, highest = 0, flag = 0;
    char name[5][10] = {"Ramesh", "Suresh", "Mahesh", "Rajesh", "Vikash"};
    int count[7] = {0};

    printf("ELECTION PROCESS AND RESULT SYSTEM\n");
    
    for(i = 0; i < 5; i++)
    {
        printf("%d. %s\n", i + 1, name[i]);
    }

    printf("Cast your vote (-negative number to terminate):\n");

    while(1)
    {
        printf("Your vote: ");
        scanf("%d", &vote);

        if(vote < 0)
        {
            break;
        }

        count[6]++;

        switch(vote)
        {
            case 1:
            {
                count[0]++;
                break;
            }
            case 2:
            {
                count[1]++;
                break;
            }
            case 3:
            {
                count[2]++;
                break;
            }
            case 4:
            {
                count[3]++;
                break;
            }
            case 5:
            {
                count[4]++;
                break;
            }
            default:
            {
                count[5]++;
                break;
            }
        }
    }

    highest = count[0];

    for(i = 0; i < 4; i++)
    {
        if(highest < count[i + 1])
        {
            highest = count[i + 1];
            flag = i + 1;
        }
    }

    printf("\nVOTING RESULTS\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d. %s: %d votes\n", i + 1, name[i], count[i]);
    }

    printf("6. SPOILT: %d votes\n", count[5]);
    printf("TOTAL VOTES: %d\n", count[6]);
    printf("WINNER: %s with %d votes", name[flag], highest);

    return 0;
}