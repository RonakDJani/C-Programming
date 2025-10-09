#include <stdio.h>

int main()
{
    int matrix[10][10] = {0}, transposed_matrix[10][10] = {0};
    int i, j, row, col, t_row, t_col;

    printf("Tanspose of matrix.\n");
    printf("Enter the size of row and column of matrix: ");
    scanf("%d %d", &row, &col);

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nActual matrix:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    if(row > col || col > row)
    {
        t_row = col;
        t_col = row;
    }
    else if(row == col)
    {
        t_row = row;
        t_col = col;
    }

    for(i = 0; i < t_row; i++)
    {
        for(j = 0; j < t_col; j++)
        {
            transposed_matrix[i][j] = matrix[j][i];
        }
    }

    printf("\nTransposes matrix:\n");

    for(i = 0; i < t_row; i++)
    {
        for(j = 0; j < t_col; j++)
        {
            printf("%d ", transposed_matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}