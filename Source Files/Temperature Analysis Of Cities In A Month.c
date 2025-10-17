#include <stdio.h>

#define DAYMAX 31
#define CITYMAX 10

void line_separator1();
void line_separator2();

int main()
{
    float temperature[31][10];
    float min_temp[10], max_temp[10];
    int i, j;
    
    // City names for display
    char city_names[10][15] = {"    Mumbai", "     Delhi", "  New York", "    London", "     Tokyo", "     Dubai", "    Sydney", " Singapore", "    Moscow", "     Cairo"};
    
    // Input temperature data
    printf("Enter temperature data for 31 days and 10 cities:\n");
    printf("(Format: Day-wise, all 10 cities per line)\n\n");
    
    for(i = 0; i < DAYMAX; i++)
    {
        printf("Day %d: ", i + 1);

        for(j = 0; j < CITYMAX; j++)
        {
            scanf("%f", &temperature[i][j]);
        }
    }
    
    // Initialize min and max arrays with first day's temperature
    for(j = 0; j < CITYMAX; j++)
    {
        min_temp[j] = temperature[0][j];
        max_temp[j] = temperature[0][j];
    }
    
    // Find minimum and maximum temperature for each city
    for(j = 0; j < CITYMAX; j++)
    {
        for(i = 0; i < DAYMAX; i++)
        {
            if(temperature[i][j] < min_temp[j])
            {
                min_temp[j] = temperature[i][j];
            }

            if(temperature[i][j] > max_temp[j])
            {
                max_temp[j] = temperature[i][j];
            }
        }
    }
    
    // Display temperature table
    printf("\n\n=== TEMPERATURE DATA TABLE ===\n\n");
    printf("Day");

    for(j = 0; j < CITYMAX; j++)
    {
        printf("%s", city_names[j]);
    }

    printf("\n");
    
    line_separator1();
    
    for(i = 0; i < DAYMAX; i++)
    {
        printf("%2d ", i + 1);

        for(j = 0; j < CITYMAX; j++)
        {
            printf("%10.1f", temperature[i][j]);
        }

        printf("\n");
    }
    
    // Display minimum and maximum temperatures
    printf("\n\n=== MINIMUM AND MAXIMUM TEMPERATURES ===\n\n");
    printf("      City     Min Temp     Max Temp\n");

    line_separator2();
    
    for(j = 0; j < CITYMAX; j++)
    {
        printf("%s     %8.1f      %7.1f\n", city_names[j], min_temp[j], max_temp[j]);
    }
    
    return 0;
}

void line_separator1()
{
    printf("-------------------------------------------------------------------------------------------------------\n");
}

void line_separator2()
{
    printf("----------------------------------------\n");
}