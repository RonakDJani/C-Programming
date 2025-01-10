#include <stdio.h>
#include <conio.h>
#include "Resource Files/Extern Include.c"

extern int globalCount;
extern void externExample2();

void externExample();

void main()
{
    externExample();
    globalCount += 5;
    printf("Global value (in main): %d\n", globalCount);
    externExample2();
    externExample();
    globalCount += 5;
    printf("Global value (in main): %d\n", globalCount);
    externExample2();
    externExample();
    globalCount += 5;
    printf("Global value (in main): %d\n", globalCount);
    externExample2();
    getch();
}

void externExample()
{
    static int count = 0;

    count++;
    globalCount += 5;

    printf("Count: %d\n", count);
    printf("Global value (in function): %d\n", globalCount);
}