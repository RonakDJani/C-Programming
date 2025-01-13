#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

volatile bool timer_flag = false;

void timer_interrupt();

void main()
{
    printf("Waiting for timer interrupt...\n");

    for (int i = 0; i < 100000000; ++i)
    {
        
    }
    
    timer_interrupt();

    while (timer_flag == 0)
    {
        
    }
    
    printf("Timer flag detected. Continuing execution...\n");
    getch();
}

void timer_interrupt()
{
    printf("Timer interrupt triggered.\n");
    timer_flag = true;
}