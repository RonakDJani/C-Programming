#include <stdio.h>

void line_separator();

int main()
{
    int i, j, car;
    char city;
    int frequency[5][5] = {0};

    printf("For each person, enter the city code followed by the car code.\n");
    printf("Enter the letter X to terminate.\n");
    printf(("City codes:\nA - Ahmedabad\nB - Bangalore\nC - Culcutta\nD - Delhi\n"));
    printf("Car codesL\n1 - Maruti\n2 - Tata\n3 - Hyundai\n4 - Toyota\n\n");

    for(i = 1; i <= 100; i++)
    {
        scanf("%c", &city);

        if(city == 'X' || city == 'x')
        {
            break;
        }

        scanf("%d", &car);

        switch(city)
        {
            case 'a':
            case 'A':
            {
                frequency[1][car]++;

                break;
            }
            case 'b':
            case 'B':
            {
                frequency[2][car]++;

                break;
            }
            case 'c':
            case 'C':
            {
                frequency[3][car]++;

                break;
            }
            case 'd':
            case 'D':
            {
                frequency[4][car]++;

                break;
            }
        }
    }

    printf("\n");
    printf("\t\tPOPULARITY TABLE\n");

    line_separator();

    printf("City\\Car       Maruti     Tata  Hyundai   Toyota\n");

    line_separator();

    for(i = 1; i <= 4; i++)
    {
        switch(i)
        {
            case 1:
            {
                printf("Ahmedabad   ");
                break;
            }
            case 2:
            {
                printf("Bangalore   ");
                break;
            }
            case 3:
            {
                printf("Calcutta    ");
                break;
            }
            case 4:
            {
                printf("Delhi       ");
                break;
            }
        }

        for(j = 1; j <= 4; j++)
        {
            printf("%9d", frequency[i][j]);
        }

        printf("\n");
    }

    line_separator();

    return 0;
}

void line_separator()
{
    printf("------------------------------------------------\n");
}