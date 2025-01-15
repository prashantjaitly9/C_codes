#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character in the string
    for (int i = 0; str[i] != '\0'; i++)
    {
        // Check if the character is a vowel
        if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' ||
            tolower(str[i]) == 'o' || tolower(str[i]) == 'u')
        {
            vowels++;
        }
        // Check if the character is a digit
        else if (isdigit(str[i]))
        {
            digits++;
        }
        // Check if the character is a whitespace
        else if (isspace(str[i]))
        {
            spaces++;
        }
        // Check if the character is a consonant
        else if (isalpha(str[i]))
        {
            consonants++;
        }
    }

    // Display the counts
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("White spaces: %d\n", spaces);

    return 0;
}
