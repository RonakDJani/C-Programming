#include <stdio.h>
#include <conio.h>
#include "Resource Files/Static Include.c"

static int globalCount = 0;

void staticExample();

void main()
{
    staticExample();
    globalCount += 5;
    printf("Global value (in main): %d\n", globalCount);
    externExample();
    staticExample();
    globalCount += 5;
    printf("Global value (in main): %d\n", globalCount);
    externExample();
    staticExample();
    globalCount += 5;
    printf("Global value (in main): %d\n", globalCount);
    externExample();
    printf("Extern global value (in main file): %d\n", externGlobalCount + 5);
    getch();
}

void staticExample()
{
    static int count = 0;

    count++;
    globalCount += 5;

    printf("Count: %d\n", count);
    printf("Global value (in function): %d\n", globalCount);
}