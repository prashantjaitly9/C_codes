#include <stdio.h>
#include <string.h>

int main()
{
    // Define and initialize strings
    char text1[50] = "Hello, ";
    char text2[] = "C Programming Language!";
    char copy[50];

    // 1. Calculate the length of a string
    printf("Length of text1: %lu\n", strlen(text1));
    printf("Length of text2: %lu\n", strlen(text2));

    // 2. Copy text2 into another string
    strcpy(copy, text2);
    printf("Copy of text2: %s\n", copy);

    // 3. Concatenate two strings
    strcat(text1, text2);
    printf("Concatenated text: %s\n", text1);

    // 4. Compare two strings
    int comparison = strcmp(text1, copy);
    if (comparison == 0)
    {
        printf("text1 and copy are identical.\n");
    }
    else
    {
        printf("text1 and copy are different.\n");
    }

    // 5. Find a substring within a string
    char *substring = strstr(text1, "C Programming");
    if (substring != NULL)
    {
        printf("Substring 'C Programming' found in text1.\n");
    }
    else
    {
        printf("Substring 'C Programming' not found in text1.\n");
    }

    return 0;
}
