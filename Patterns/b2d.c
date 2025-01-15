#include <stdio.h>
int main()
{
    int bin[] = {1, 0, 1, 1};
    int len = sizeof(bin) / sizeof(bin[0]);
    int dec = 0;
    int pow = 1;
    for (int i = len - 1; i >= 0; i--)
    {
        dec += bin[i] * pow;
        pow *= 2;
    }
    printf("%d\n", dec);
    return 0;
}