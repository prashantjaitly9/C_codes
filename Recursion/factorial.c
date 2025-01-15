#include <stdio.h>

// Recursive function to find the factorial
int factorial(int n)
{
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1)
    {
        return 1;
    }

    // Recursive case: n * factorial of (n-1)
    return n * factorial(n - 1);
}

int main()
{
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        // Calculate and display the factorial
        int result = factorial(num);
        printf("Factorial of %d is: %d\n", num, result);
    }

    return 0;
}
