#include <stdio.h>

#define PRODUCTS 5
#define WEEKS 4

int main()
{
    int m[4][5], s[4][5], cost[5];
    int m_value[4][5], s_value[4][5];
    int m_week[4] = {0}, s_week[4] = {0};
    int m_product[5] = {0}, s_product[5] = {0};
    int m_total, s_total, i, j, option;

    printf("PRODUCTION AND SALES ANALYSIS\n");
    printf("\nEnter products manufactured week wise:\n");
    
    for(i = 0; i < WEEKS; i++)
    {
        for(j = 0; j < PRODUCTS; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nEnter products sold week wise:\n");

    for(i = 0; i < WEEKS; i++)
    {
        for(j = 0; j < PRODUCTS; j++)
        {
            scanf("%d", &s[i][j]);
        }
    }

    printf("\nEnter cost of each product:\n");

    for(i = 0; i < PRODUCTS; i++)
    {
        scanf("%d", &cost[i]);
    }

    // 1. Value matrix of production and sales
    for(i = 0; i < WEEKS; i++)
    {
        for(j = 0; j < PRODUCTS; j++)
        {
            m_value[i][j] = m[i][j] * cost[j];
            s_value[i][j] = s[i][j] * cost[j];
        }
    }

    // 2. Total value of weekly production and sales
    for(i = 0; i < WEEKS; i++)
    {
        for(j = 0; j < PRODUCTS; j++)
        {
            m_week[i] += m_value[i][j];
            s_week[i] += s_value[i][j];
        }
    }

    // 3. Product wise monthly value of production and sales
    for(i = 0; i < PRODUCTS; i++)
    {
        for(j = 0; j < WEEKS; j++)
        {
            m_product[i] += m_value[j][i];
            s_product[i] += s_value[j][i];
        }
    }

    // 4. Grand total value of production and sales
    m_total = s_total = 0;

    for(i = 0; i < WEEKS; i++)
    {
        m_total += m_week[i];
        s_total += s_week[i];
    }

    printf("\nEnter appropriate number and press ENTER key.\n");
    printf("1. Value matrix of production and sales\n");
    printf("2. Total value of weekly production and sales\n");
    printf("3. Product wise monthly value of production and sales\n");
    printf("4. Grand total value of production and sales\n");
    printf("5. Exit\n");

    while(1)
    {
        printf("\nEnter option: ");
        scanf("%d", &option);
        printf("\n");

        switch(option)
        {
            case 1:
            {
                printf("                      PRODUCTION VALUE TABLE\n");
                printf("---------------------------------------------------------------------\n");
                printf("            Product 1   Product 2   Product 3   Product 4   Product 5\n");
                printf("---------------------------------------------------------------------\n");

                for(i = 0; i < WEEKS; i++)
                {
                    printf("Week %d   ", i + 1);

                    for(j = 0; j < PRODUCTS; j++)
                    {
                        printf("%12d", m_value[i][j]);
                    }

                    printf("\n");
                }

                printf("---------------------------------------------------------------------\n\n");

                printf("                        SALES VALUE TABLE\n");
                printf("---------------------------------------------------------------------\n");
                printf("            Product 1   Product 2   Product 3   Product 4   Product 5\n");
                printf("---------------------------------------------------------------------\n");

                for(i = 0; i < WEEKS; i++)
                {
                    printf("Week %d   ", i + 1);

                    for(j = 0; j < PRODUCTS; j++)
                    {
                        printf("%12d", s_value[i][j]);
                    }

                    printf("\n");
                }

                printf("---------------------------------------------------------------------\n");

                break;
            }
            case 2:
            {
                printf("TOTAL WEEKLY PRODUCTION AND SALES\n");
                printf("---------------------------------\n");
                printf("            Production      Sales\n");
                printf("---------------------------------\n");

                for(i = 0; i < WEEKS; i++)
                {
                    printf("Week %d %15d %10d\n", i + 1, m_week[i], s_week[i]);
                }

                printf("---------------------------------\n");

                break;
            }
            case 3:
            {
                printf("PRODUCT WISE TOTAL PRODUCTION AND SALES\n");
                printf("---------------------------------------\n");
                printf("                  Production      Sales\n");
                printf("---------------------------------------\n");

                for(i = 0; i < PRODUCTS; i++)
                {
                    printf("Product %d %18d %10d\n", i + 1, m_product[i], s_product[i]);
                }

                printf("---------------------------------------\n");

                break;
            }
            case 4:
            {
                printf("GRAND TOTAL OF PRODUCTION AND SALES\n");
                printf("Total Production: %d\n", m_total);
                printf("Total Sales: %d\n", s_total);

                break;
            }
            case 5:
            {
                printf("\nGOOD BYE!\n");

                goto exit;
            }
            default:
            {
                printf("Please enter a valid option!\n\n");

                break;
            }
        }
    }

    exit:
    return 0;
}