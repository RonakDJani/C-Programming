#include <stdio.h>

int main()
{
    long long i, range;
    long long next_num, pre_num, pre_pre_num;
    
    printf("Enter the range of fibonacci series: ");
    scanf("%lld", &range);

    next_num = 0;

    for(i = 1; next_num <= range; i++)
    {
        if(i <= 1)
        {
            pre_pre_num = 0;
            pre_num = 1;

            printf("%lld %lld ", pre_pre_num, pre_num);
        }
        else
        {
            next_num = pre_pre_num + pre_num;

            if(next_num <= range)
            {
                printf("%lld ", next_num);

                pre_pre_num = pre_num;
                pre_num = next_num;
            }
        }
    }

    return 0;
}