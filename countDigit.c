#include <stdio.h>
int main()
{
    int num, i, temp;
    int count = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    temp = num;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("The number of digits in %d is %d", temp, count);
    return 0;
}