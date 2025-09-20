extern int globalCount;

extern void externExample2()
{
    globalCount += 5;

    printf("globalCount is accessed and modified (in other file's function): %d\n", globalCount);
}