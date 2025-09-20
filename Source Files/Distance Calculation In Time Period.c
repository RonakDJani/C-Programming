#include <stdio.h>
#include <math.h>

int main()
{
    int time;
    float initial_velocity, acceleration, distance;

    printf("Enter initial velocity (in m/s): ");
    scanf("%f", &initial_velocity);
    printf("Enter acceleration (in m/s^2): ");
    scanf("%f", &acceleration);
    printf("Enter time period (in seconds): ");
    scanf("%d", &time);

    distance = (initial_velocity * time) + (0.5 * acceleration * pow(time, 2));

    printf("Distance traveled in %d seconds: %.2f meters (%.2f Kilometers)\n", time, distance, (distance / 1000));

    return 0;
}