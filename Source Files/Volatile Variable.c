#include <stdio.h>
#include <stdbool.h>

// Simulating hardware interrupt
volatile bool timer_flag = false; // Volatile because it can be modified by an external source

void timer_interrupt();

int main()
{
    printf("Waiting for timer interrupt...\n");

    // Simulating the interrupt after some time
    for (int i = 0; i < 100000000; ++i)
    {
        // Busy-wait loop
    }
    
    timer_interrupt();

    // Main program checking the flag
    while (timer_flag == 0)
    {
        // Waiting for the flag to be set by the interrupt
    }
    
    printf("Timer flag detected. Continuing execution...\n");

    return 0;
}

// Simulated interrupt service routine
void timer_interrupt()
{
    printf("Timer interrupt triggered.\n");
    timer_flag = true;
}