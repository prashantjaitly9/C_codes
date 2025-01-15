#include <stdio.h>
int main()
{
    int n = 7;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i == n - j - 1)
            {
                printf("* ");
            }
            else if (j <= n / 2 && (i < j || i > n - j - 1))
            {
                printf("* ");
            }
            else if (j > n / 2 && (i > j || i < n - j - 1))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}