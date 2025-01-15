#include <stdio.h>

void multiplyMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3])
{
    // Initialize the result matrix to 0
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void printMatrix(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int matrix2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}};

    int result[3][3]; // Matrix to store the result

    // Multiply matrices
    multiplyMatrices(matrix1, matrix2, result);

    // Display the result
    printf("Resultant Matrix:\n");
    printMatrix(result);

    return 0;
}
