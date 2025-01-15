#include <stdio.h>
int main()
{
    int bin[32] = {0};
    int dec = 32;
    int count = 0;

    printf("%d\n", bin[15]);
    for (int i = 31; i >= 0; i--)
    {
        bin[i] = dec % 2;
        // bin[i] = dec % 16; for hex

        dec /= 2;
        // dec /= 16; for hex
        count++;
        if (dec == 0)
            break;
    }
    for (int i = 32 - count; i < 32; i++)
    {
        printf("%d", bin[i]);
        // printf("%x", bin[i]); for hex
    }

    return 0;
}