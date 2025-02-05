#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char *s)
{
    if (s == NULL)
        return false;

    int size = strlen(s);
    if (size % 2 != 0)
        return false;

    char stack[size];
    int top = -1;

    for (int i = 0; i < size; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            stack[++top] = s[i];
        }
        else
        {
            if (top == -1)
                return false;

            char topChar = stack[top--];

            if ((s[i] == ')' && topChar != '(') ||
                (s[i] == '}' && topChar != '{') ||
                (s[i] == ']' && topChar != '['))
            {
                return false;
            }
        }
    }

    return top == -1;
}

int main()
{
    char s[] = "{[()]}";
    printf("%s\n", isValid(s) ? "Valid" : "Invalid");

    char s2[] = ")(";
    printf("%s\n", isValid(s2) ? "Valid" : "Invalid");

    return 0;
}
