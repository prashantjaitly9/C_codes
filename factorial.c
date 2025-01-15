#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("Enter a positive integer!");
    }

    else if (a == 0 || a == 1)
    {
        printf("The factorial of %d is %d", a, 1);
    }

    else
    {
        int fact = 1;
        for (int i = a; i > 0; i--)
        {
            fact = fact * i;
        }
        printf("The factorial of %d is %d", a, fact);
    }
}