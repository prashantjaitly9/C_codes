#include <stdio.h>

// Recursive function to convert decimal to binary
void decimalToBinary(int n)
{
    if (n > 1)
    {
        // Recursively call the function for the quotient
        decimalToBinary(n / 2);
    }

    // Print the remainder (binary digit)
    printf("%d", n % 2);
}

int main()
{
    int num;

    // Input the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Handle the case when the number is 0
    if (num == 0)
    {
        printf("Binary: 0\n");
    }
    else
    {
        printf("Binary: ");
        decimalToBinary(num);
        printf("\n");
    }

    return 0;
}
