int globalCount = 0;

void externExample2()
{
    globalCount += 5;

    printf("Global value (in other file): %d\n", globalCount);
}