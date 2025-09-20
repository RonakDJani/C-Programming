#include <stdio.h>

int price_to_paise(int beforeD, int afterD);

int main()
{
    int before_dot, after_dot;

    printf("Enter price: ");
    scanf("%d.%d", &before_dot, &after_dot);
    printf("%d paise", price_to_paise(before_dot, after_dot));
    
    return 0;
}

int price_to_paise(int beforeD, int afterD)
{
    int paise;

    paise = (beforeD * 100) + afterD;

    return paise;
}