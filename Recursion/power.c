#include <stdio.h>

// Recursive function to calculate power
int power(int base, int exp)
{
    // Base case: any number raised to the power of 0 is 1
    if (exp == 0)
    {
        return 1;
    }

    // Recursive case: base^exp = base * base^(exp-1)
    return base * power(base, exp - 1);
}

int main()
{
    int base, exp;

    // Input base and exponent
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exp);

    // Calculate and display the result
    int result = power(base, exp);
    printf("%d raised to the power of %d is: %d\n", base, exp, result);

    return 0;
}
