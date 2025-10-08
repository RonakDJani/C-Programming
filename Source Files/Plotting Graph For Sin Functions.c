#include <stdio.h>
#include <math.h>

#define MIN 0
#define MAX 180
#define STEP 15
#define PI 3.14159265
#define WIDTH 50

int main()
{
    double x, y;
    int degree, i, pos;
    char line[WIDTH + 1];

    printf("Graph of y = sin(x) from 0 to 180 degrees\n");
    printf("Degree\tsin(x)\t\t\t\t Graph\n");
    printf("------\t------\t\t\t\t -----\n");

    for(degree = MIN; degree <= MAX; degree += STEP)
    {
        x = degree * PI / 180;
        y = sin(x);
        pos = (int)((y + 1.0) * WIDTH / 2);

        for(i = 0; i <= WIDTH; i++)
        {
            if(i == WIDTH / 2)
            {
                line[i] = '|';
            }
            else if(i == pos)
            {
                line[i] = '*';
            }
            else
            {
                line[i] = ' ';
            }
        }
        line[WIDTH] = '\0';

        printf("%3d\t%.4f\t%s\n", degree, y, line);
    }

    return 0;
}