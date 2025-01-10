extern int externGlobalCount = 0;

extern void externExample()
{
    externGlobalCount += 5;

    printf("Extern global value (in other file): %d\n", externGlobalCount);
}