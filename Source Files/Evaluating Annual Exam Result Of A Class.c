#include <stdio.h>

int main()
{
    int marks[100][20], roll_no[100], ts_marks[100] = {0}, hs_marks[20] = {0}, flag[20] = {0};
    int t_stud, t_subj, ht_marks, ht_flag = 0;
    int i, j;

    printf("Annual Examination Result Evaluation\n");
    printf("Enter the number of total students and total subjects of class: ");
    scanf("%d %d", &t_stud, &t_subj);

    printf("Enter roll number and marks of each subjects:\n");

    for(i = 0; i < t_stud; i++)
    {
        scanf("%d", &roll_no[i]);

        for(j = 0; j < t_subj; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }

    for(i = 0; i < t_stud; i++)
    {
        for(j = 0; j < t_subj; j++)
        {
            ts_marks[i] += marks[i][j];
        }
    }

    for(i = 0; i < t_subj; i++)
    {
        hs_marks[i] = marks[0][i];
    }

    for(i = 0; i < t_subj; i++)
    {
        for(j = 0; j < t_stud - 1; j++)
        {
            if(hs_marks[i] < marks[j + 1][i])
            {
                hs_marks[i] = marks[j + 1][i];
                flag[i] = j + 2;
            }
        }
    }

    ht_marks = ts_marks[0];

    for(i = 0; i < t_stud - 1; i++)
    {
        if(ht_marks < ts_marks[i + 1])
        {
            ht_marks = ts_marks[i + 1];
            ht_flag = i + 2;
        }
    }

    printf("\nTotal marks obtained by each student:\n");

    for(i = 0; i < t_stud; i++)
    {
        printf("%d: %d total marks\n", roll_no[i], ts_marks[i]);
    }

    printf("\nHighest marks in each subject by roll number:\n");
    
    for(i = 0; i < t_subj; i++)
    {
        printf("Subject %d- Roll No: %d, %d marks\n", i + 1, flag[i] + 1000, hs_marks[i]);
    }

    printf("\nThe student who obtained highest total marks- Roll No: %d, Total Marks: %d", ht_flag + 1000, ht_marks);

    return 0;
}