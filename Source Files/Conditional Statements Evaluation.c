#include <stdio.h>

int nested_if(int x);
int else_if(int x);
int con_op(int x);

int main()
{
    int x, y, option;

    printf("Select option- 1. Nested If\t2. Else If\t3. Conditional Operator (? :): ");
    scanf("%d", &option);

    switch(option)
    {
        case 1:
        {
            printf("Enter value for x: ");
            scanf("%d", &x);

            y = nested_if(x);

            printf("y = %d\n", y);

            break;
        }
        case 2:
        {
            printf("Enter value for x: ");
            scanf("%d", &x);

            y = else_if(x);

            printf("y = %d\n", y);

            break;
        }
        case 3:
        {
            printf("Enter value for x: ");
            scanf("%d", &x);

            y = con_op(x);

            printf("y = %d\n", y);

            break;
        }
        default:
        {
            printf("Invalid option selected!\n");

            break;
        }
    }

    return 0;
}

int nested_if(int x)
{
    if(x > 0)
    {
        return 1;
    }
    else
    {
        if(x == 0)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
}

int else_if(int x)
{
    if(x > 0)
    {
        return 1;
    }
    else if(x == 0)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int con_op(int x)
{
    return ((x > 0) ? 1 : ((x == 0) ? 0 : -1));
}