#include <stdio.h>
#include <conio.h>

void main()
{
    enum day {mon = 1, tue, wed, thu, fri, sat, sun} week_st, week_end;
    int opt;

    week_st = mon;
    week_end = sat;

    printf("Enter number between 1 to 7: ");
    scanf("%d", &opt);

    if (opt >= week_st && opt < week_end)
    {
        printf("%d is a week day.", opt);
    }
    else if (opt >= week_end && opt <= 7)
    {
        printf("%d is a week end.", opt);
    }
    else
    {
        printf("Please enter a valid number!");
    }

    getch();
}