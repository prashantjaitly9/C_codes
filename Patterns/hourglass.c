#include <stdio.h>
int main()
{
    int row, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for (i = 0; i < (row / 2) + 1; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (k = row - 2 * i; k > 0; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = (row / 2) - 1; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (k = 0; k < row - 2 * i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}