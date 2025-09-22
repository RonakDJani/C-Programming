#include <stdio.h>

int main()
{
    char name[20][10];
    int sum, sum_maths_physics;
    int counter[10], count;
    typedef int marks;
    marks maths, physics, chemistry;

    count = 0;

    while(1)
    {
        printf("Enter your first name (- to terminate): ");
        scanf("%s", name[count]);
        
        if(name[count][0] == '-')
        {
            goto list;
        }

        printf("Enter marks for maths, physics and chemistry: ");
        scanf("%d %d %d", &maths, &physics, &chemistry);

        sum = maths + physics + chemistry;
        sum_maths_physics = maths + physics;

        if((maths >= 60 && physics >=50 && chemistry >= 40 && sum >= 200) || sum_maths_physics >= 150)
        {
            counter[count] = 1;
            count++;
        }
        else
        {
            counter[count] = 0;
            count++;
            printf("Not eligible for admission.\n");
        }
    }

    printf("Names of eligible candidates are:\n");

    list:
    for(int i = 0; i <= count; i++)
    {
        if(counter[i] == 1)
        {
            printf("%s\n", name[i]);
        }
    }
    
    printf("\nEnd of program!\n");

    return 0;
}