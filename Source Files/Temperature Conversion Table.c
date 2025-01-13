#include <stdio.h>
#include <conio.h>

#define F_LOW 0
#define F_MAX 250
#define STEP 25

void main()
{
    typedef float TEMPERATURE;
    TEMPERATURE fahrenheit, celsius;

    fahrenheit = F_LOW;

    printf("Fahrenheit\tCelsius\n");

    while (fahrenheit <= F_MAX)
    {
        celsius = (fahrenheit - 32) / 1.8;

        printf("%10.2f\t%7.2f\n", fahrenheit, celsius);

        fahrenheit = fahrenheit + STEP;
    }
    getch();
}