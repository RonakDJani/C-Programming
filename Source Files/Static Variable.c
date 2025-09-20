#include <stdio.h>

static int globalCount = 0;

void staticExample();

int main()
{
    staticExample();
    globalCount += 5;
    printf("globalCount is accessed and modified (in main function): %d\n", globalCount);
    staticExample();
    globalCount += 5;
    printf("globalCount is accessed and modified (in main function): %d\n", globalCount);
    staticExample();
    globalCount += 5;
    printf("globalCount is accessed and modified (in main function): %d\n", globalCount);
    printf("The variable globalCount is accessible throughout the program.\n");
    printf("The variable count is only accessible in the function staticExample().\n");
    
    /* count++; This will give an error as count is not accessible here. */

    return 0;
}

void staticExample()
{
    static int count = 0;

    count++;
    globalCount += 5;

    printf("Count: %d\n", count);
    printf("globalCount is accessed and modified (in other function): %d\n", globalCount);
}