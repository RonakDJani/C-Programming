#include <stdio.h>

int main()
{
    int t_stud, t_subj, rollno, marks, total_marks;
    int i, j;
    printf("Enter number of students and subjects: ");
    scanf("%d %d", &t_stud, &t_subj);

    for(i = 1; i <= t_stud; i++)
    {
        total_marks = 0;
        printf("Enter roll number: ");
        scanf("%d", &rollno);
        printf("Enter marks of %d subjects: ", t_subj);

        for(j = 1; j <= t_subj; j++)
        {
            scanf("%d", &marks);

            total_marks = total_marks + marks;
        }

        printf("Total Marks: %d\n", total_marks);

        if((total_marks / t_subj) >= 60)
        {
            printf("Roll Number: %d Percentage: %.2f%% (First Division)\n\n", rollno, ((float)total_marks / t_subj));
        }
        else if((total_marks / t_subj >= 50))
        {
            printf("Roll Number: %d Percentage: %.2f%% (Second Division)\n\n", rollno, ((float)total_marks / t_subj));
        }
        else if((total_marks / t_subj >= 40))
        {
            printf("Roll Number: %d Percentage: %.2f%% (Third Division)\n\n", rollno, ((float)total_marks / t_subj));
        }
        else
        {
            printf("Roll Number: %d Percentage: %.2f%% (FAIL)\n\n", rollno, ((float)total_marks / t_subj));
        }
    }

    return 0;
}