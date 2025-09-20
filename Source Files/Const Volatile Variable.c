#include <stdio.h>
#include <stdint.h>

// Simulating a hardware sensor register
const volatile uint8_t sensor_register = 50; // Sensor value (read-only and volatile)

int main()
{
    printf("Reading sensor value...\n");

    // Reading the sensor value
    uint8_t sensor_value = sensor_register;

    printf("Sensor value: %u\n", sensor_value);
    printf("Modifying \"const volatile uint8_t sensor_register\" variable can cause compilation error.");

    // Uncommenting the next line will cause a compilation error
    // sensor_register = 100;

    return 0;
}