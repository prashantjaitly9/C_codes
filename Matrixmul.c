#include <stdio.h>

void matrixMul(int a[100][100], int r1, int c1, int b[100][100], int r2, int c2)
{
    int prod[r1][c2];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            prod[i][j] = 0;

            for (int k = 0; k < r2; k++)
            {
                prod[i][j] += a[i][k] * b[k][j];
            }

            printf("%d\t", prod[i][j]);
        }

        printf("\n");
    }
}

void main()
{
    int r1, r2, c1, c2;

    printf("\nEnter the number of rows in Matrix-1: ");
    scanf("%d", &r1);
    printf("\nEnter the number of columns in Matrix-1: ");
    scanf("%d", &c1);

    printf("\nEnter the number of rows in Matrix-2: ");
    scanf("%d", &r2);
    printf("\nEnter the number of columns in Matrix-2: ");
    scanf("%d", &c2);

    int a[r1][c1];
    int b[r2][c2];

    printf("\nEnter the values in Matrix-1: ");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            int temp;
            scanf("%d", &temp);
            a[i][j] = temp;
        }
    }

    printf("\nEnter the values in Matrix-2: ");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int temp;
            scanf("%d", &temp);
            b[i][j] = temp;
        }
    }

    matrixMul(a, r1, c1, b, r2, c2);
}
