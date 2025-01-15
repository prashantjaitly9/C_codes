#include <stdio.h>
int main()
{
    int n = 17;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i || j == n - i - 1)
            {
                printf("* ");
            }
            else if (i <= n / 2 && (j < i || j > n - i - 1))
            {
                printf("* ");
            }
            else if (i > n / 2 && (j > i || j < n - i - 1))
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