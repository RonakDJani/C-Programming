#include <stdio.h>
#include <conio.h>

void main()
{
    float rice, suger;

    printf("Enter price for rice and suger: ");
    scanf("%f %f", &rice, &suger);

    printf("*** LIST OF ITEMS ***\n");
    printf("Item\t\tPrice\n");
    printf("Rice:\t\t%.2f\n", rice);
    printf("Suger:\t\t%.2f", suger);
    getch();
}