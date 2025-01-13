#include <stdio.h>
#include <conio.h>

void CtoF();
void FtoC();

float temp;

void main()
{
    int option;

    printf("Temperature Conversion\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        CtoF();
        break;

    case 2:
        FtoC();
        break;
    
    default:
        printf("Invalid option!");
        break;
    }
    getch();
}

void CtoF()
{
    printf("Enter celsius value: ");
    scanf("%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf("Fahrenheit: %.2f", temp);
}

void FtoC()
{
    printf("Enter Fahrenheit value: ");
    scanf("%f", &temp);
    temp = (temp - 32) *  5 / 9;
    printf("Celsius: %.2f", temp);
}