#include <stdio.h>
int main()
{
    int row, i, j, k;
    printf("Enter the number of row: ");
    scanf("%d", &row);

    for (i = 0; i <= row / 2; i++)
    {
        for (j = row / 2; j > i; j--)
        {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = row / 2 - 1; i >= 0; i--)
    {
        for (j = row / 2; j > i; j--)
        {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}