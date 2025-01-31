#include <stdio.h>

#define MAX 10 // Maximum size of the matrix

// Function to input a matrix
void inputMatrix(int matrix[MAX][MAX], int rows, int cols)
{
    printf("Enter the elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[MAX][MAX], int rows, int cols)
{
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];
    int rows, cols;

    // Input dimensions of the matrices
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    // Input first matrix
    printf("Matrix 1:\n");
    inputMatrix(matrix1, rows, cols);

    // Input second matrix
    printf("Matrix 2:\n");
    inputMatrix(matrix2, rows, cols);

    // Perform matrix addition
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printMatrix(result, rows, cols);

    return 0;
}
