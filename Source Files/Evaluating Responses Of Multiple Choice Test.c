#include <stdio.h>

#define R 25
#define STUDENTS 3

int main()
{
    char key[R + 1], responses[R + 1];
    int correct[R + 1], i, n, count, student;

    printf("Enter correct key responses: ");

    for(i = 0; i <= R; i++)
    {
        scanf("%c", &key[i]);
    }

    key[i] == '\0';

    printf("\n");

    for(student = 1; student <= STUDENTS; student++)
    {
        count = 0;

        printf("Student %d responses: ", student);
        
        for(i = 0; i <= R; i++)
        {
            scanf("%c", &responses[i]);

            if(responses[i] == key[i])
            {
                correct[i] = 1;
                count++;
            }
            else
            {
                correct[i] = 0;
            }
        }

        responses[i] = '\0';
        correct[i] = '\0';
        
        count--;

        printf("Student %d score: %d out of %d\n", student, count, R);
        printf("Responses of following questions are wrong: ");

        if(count == 25)
        {
            printf("NIL");
        }
        else
        {
            for(i = 0; i <= R; i++)
            {
                if(correct[i] == 0)
                {
                    printf("%d ", i + 1);
                }
            }
        }

        printf("\n\n");
    }

    return 0;
}