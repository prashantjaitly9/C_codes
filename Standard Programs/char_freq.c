#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, frequency = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Input character to find frequency
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    // Calculate frequency of the character
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            frequency++;
        }
    }

    // Display the frequency
    printf("Frequency of '%c' = %d\n", ch, frequency);

    return 0;
}
