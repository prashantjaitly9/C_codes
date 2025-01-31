#include <stdio.h>
#include <math.h>
int main()
{
    int num, res;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while (num != 0)
    {
        res = num % 10;
        sum = sum * 10 + res;
        num = num / 10;
    }
    if (sum == temp)
    {
        printf("The number %d is a Palindrome", temp);
    }
    else
    {
        printf("The number %d is not Palindrome", temp);
    }
    return 0;
}
