#include <stdio.h>
#include <math.h>

#define MIN_ANGLE 0
#define MAX_ANGLE 180
#define STEP 15
#define PI 3.14159

int main()
{
    int angle;
    double radians, sine_value, cosine_value;

    printf("Angle (degrees) | Sine       | Cosine\n");
    printf("----------------------------------------\n");

    for (angle = MIN_ANGLE; angle <= MAX_ANGLE; angle += STEP) 
    {
        radians = angle * (PI / 180.0); // Convert degrees to radians
        sine_value = sin(radians);
        cosine_value = cos(radians);
        printf("     %4d       | % .7f | % .6f\n", angle, sine_value, cosine_value);
    }

    printf("----------------------------------------\n");

    return 0;
}