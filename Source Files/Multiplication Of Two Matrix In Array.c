#include <stdio.h>

int main()
{
    int matrix1[10][10] = {0}, matrix2[10][10] = {0}, mul_matrix[10][10] = {0};
    int i, j, k, size;

    printf("Multiplication of matrix 1 and matrix 2.\n");
    printf("Enter the size for both square matrix: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            printf("matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            printf("matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\nmatrix1:\n");

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            printf("%d ", matrix1[i][j]);
        }

        printf("\n");
    }

    printf("\nmatrix2:\n");

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            printf("%d ", matrix2[i][j]);
        }

        printf("\n");
    }

    for (i = 0; i < size; i++) 
    {
        for (j = 0; j < size; j++) 
        {
            for (k = 0; k < size; k++) 
            {
                mul_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("\nmatrix1 * matrix2:\n");

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            printf("%d ", mul_matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}