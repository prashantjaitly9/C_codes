#include <stdio.h>
#include <math.h>

int main()
{
    int num, i, flag;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num < 2)
    {
        printf("Enter numbers > 2.");
    }
    else
    {
        int root = sqrt(num);
        for (i = 2; i <= root; i++)
        {
            if (num % i == 0)
            {
                flag = 0;
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            printf("The number %d is a prime", num);
        }
        else
        {
            printf("The number %d is not prime", num);
        }
    }
}