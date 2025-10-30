#include <stdio.h>

int main()
{
    int rows, count = 0, i, j, k;
    int pascal[50][50];
    
    // Input number of rows
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    
    // Generate Pascal's Triangle
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j <= i; j++)
        {
            // First and last elements in each row are 1
            if(j == 0 || j == i)
            {
                pascal[i][j] = 1;
                count++;
            }
            else
            {
                // Other elements are sum of two elements from previous row
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
                count++;
            }
        }
    }
    
    // Print Pascal's Triangle
    printf("\nPascal's Triangle:\n\n");
    
    for(i = 0; i < rows; i++)
    {
        // Print spaces for formatting
        for(k = 0; k < rows - i - 1; k++)
        {
            printf("   ");
        }
        
        // Print elements of current row
        for(j = 0; j <= i; j++)
        {
            printf("%6d", pascal[i][j]);
        }
        
        printf("\n");
    }
    
    // Display array contents
    printf("\n\nArray Contents:\n");
    printf("Row\tElements\n");
    printf("---\t--------\n");
    
    for(i = 0; i < rows; i++)
    {
        printf("%d\t", i + 1);
        for(j = 0; j <= i; j++)
        {
            printf("%d ", pascal[i][j]);
        }

        printf("\n");
    }

    printf("Total elements: %d", count);
    
    return 0;
}