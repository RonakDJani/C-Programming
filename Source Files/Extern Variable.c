#include <stdio.h>
#include "Resource Files/Extern Include.h"

int globalCount = 0;

void externExample();

int main()
{
    externExample();
    globalCount += 5;
    printf("globalCount is accessed and modified (in main function): %d\n", globalCount);
    externExample2();
    externExample();
    globalCount += 5;
    printf("globalCount is accessed and modified (in main function): %d\n", globalCount);
    externExample2();
    externExample();
    globalCount += 5;
    printf("globalCount is accessed and modified (in main function): %d\n", globalCount);
    externExample2();
    
    return 0;
}

void externExample()
{
    static int count = 0;

    count++;
    globalCount += 5;

    printf("Count: %d\n", count);
    printf("globalCount is accessed and modified (in other function): %d\n", globalCount);
}