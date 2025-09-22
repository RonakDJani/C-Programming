#include <stdio.h>

int main()
{
    int marks, count80, count60, count40, count40minus, r1, r2, r3, r4;

    count80 = count60 = count40 = count40minus = 0;
    r1 = r2 = r3 = r4 = 0;

    printf("Enter marks form 0 to 100 (negative to terminate):\n");
    
    input:
    scanf("%d", &marks);

    if(marks < 0)
    {
        goto output;
    }

    if(marks > 80 & marks <= 100)
    {
        count80++, count60++, count40++, r1++;
    }
    else if(marks > 60 & marks <= 80)
    {
        count60++, count40++, r2++;
    }
    else if(marks > 40 && marks <= 60)
    {
        count40++, r3++;
    }
    else
    {
        count40minus++, r4++;
    }

    goto input;

    output:
    printf("Statistics of students marks:\n");
    printf("Count of students obtained 80+ marks: %d\n", count80);
    printf("Count of students obtained 60+ marks: %d\n", count60);
    printf("Count of students obtained 40+ marks: %d\n", count40);
    printf("Count of students obtained 40- marks: %d\n", count40minus);
    printf("Marks obtained in the range of 81 to 100: %d\n", r1);
    printf("Marks obtained in the range of 61 to 80: %d\n", r2);
    printf("Marks obtained in the range of 41 to 60: %d\n", r3);
    printf("Marks obtained in the range of 0 to 40: %d\n", r4);

}