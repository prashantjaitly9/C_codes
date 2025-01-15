#include <stdio.h>
#include <math.h>

int main()
{
    int num, i, temp, res, rem, sum = 0;
    int count = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;
    res = num;
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }

    while (res != 0)
    {
        rem = res % 10;
        sum = sum + pow(rem, count);
        res = res / 10;
    }

    if (sum == num)
    {
        printf("Armstrong number.");
    }
    else
    {
        printf("Not armstrong number.");
    }
}