#include <stdio.h>

// Recursive function to check even or odd
void checkEvenOdd(int start, int end)
{
    // Base case: if start exceeds end, stop recursion
    if (start > end)
    {
        return;
    }

    // Check if the number is even or odd
    if (start % 2 == 0)
    {
        printf("%d is Even\n", start);
    }
    else
    {
        printf("%d is Odd\n", start);
    }

    // Recursive call to check the next number
    checkEvenOdd(start + 1, end);
}

int main()
{
    int start, end;

    // Input range (start and end values)
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Check and print whether each number in the range is even or odd
    checkEvenOdd(start, end);

    return 0;
}
