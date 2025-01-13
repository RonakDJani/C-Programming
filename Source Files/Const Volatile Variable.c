#include <stdio.h>
#include <conio.h>
#include <stdint.h>

const volatile uint8_t sensor_register = 50;

void main()
{
    printf("Reading sensor value...\n");

    uint8_t sensor_value = sensor_register;

    printf("Sensor value: %u\n", sensor_value);
    printf("Modifying \"const volatile uint8_t sensor_register\" variable can cause compilation error.");
    getch();
}