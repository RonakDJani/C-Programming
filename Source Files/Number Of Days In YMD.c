#include <stdio.h>

int main()
{
    int day, month, year;
    printf("Enter number of days: ");
    scanf("%d", &day);

    year = day / 365;
    month = (day - (year * 365)) / 30;
    day = day - ((year * 365) + (month * 30));

    printf("Year: %d\n", year);
    printf("Months: %d\n", month);
    printf("Days: %d", day);
    
    return 0;
}