#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[100], ch;
    int i, frequency = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            frequency++;
        }
    }
    printf("Frequency of '%c' = %d\n", ch, frequency);
    return 0;
}