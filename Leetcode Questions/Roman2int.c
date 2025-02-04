#include <stdio.h>

int romanToInt(char *s)
{
    int n = 0;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == 'I')
        {
            if (s[i + 1] == 'V' || s[i + 1] == 'X')
            {
                n--;
            }
            else
                n++;
        }

        else if (s[i] == 'V')
        {
            n = n + 5;
        }

        else if (s[i] == 'X')
        {
            if (s[i + 1] == 'L' || s[i + 1] == 'C')
            {
                n = n - 10;
            }
            else
                n = n + 10;
        }

        else if (s[i] == 'L')
        {
            n = n + 50;
        }

        else if (s[i] == 'C')
        {
            if (s[i + 1] == 'D' || s[i + 1] == 'M')
            {
                n = n - 100;
            }
            else
                n = n + 100;
        }

        else if (s[i] == 'D')
        {
            n = n + 500;
        }

        else if (s[i] == 'M')
        {
            n = n + 1000;
        }

        else
        {
            return 0;
        }
    }

    return n;
}

int main()
{
    char s[] = "MCMXCIV";
    printf("%d\n", romanToInt(s));
    return 0;
}