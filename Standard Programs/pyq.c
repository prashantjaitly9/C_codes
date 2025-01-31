// char *c[] = {"NITKMCA", "FINAL", "EXAM", "MCQ"};
// char **cp[] = {c + 3, c + 1, c + 2, c};
// char ***cpp = cp;
// int main()
// {
//     printf("%s ", **++cpp);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char c[] = "MCAGATE2024";
//     char *p = c;
//     printf("%s", p + p[3] - p[1] + 1);
//     return 0;
// }

// #include <stdio.h>
// void f(int *p, int *q)
// {
//     p = q;
//     *p = 3;
// }
// int i = 1, j = 2;
// int main()
// {
//     f(&i, &j);
//     printf("%d %d \n", i, j);
//     return 0;
// }
// #include <stdio.h>
// void printxy(int x, int y)
// {
//     int *p;
//     x = 0;
//     p = &x;
//     y = *p;
//     *p = 1;
//     printf("%d %d \n", x, y);
// }

// int main()
// {
//     printxy(2, 3);
// }

// void main()
// {
//     int i = 9, j = 11, k = 5, x;
//     x = i < j < k;
//     printf("%d", x);
// }

// #include <stdio.h>
// int *A, stkTop;
// int stkFunc(int opcode, int val)
// {
//     static int size = 0, stkTop = 0;
//     switch (opcode)
//     {
//     case -1:
//         size = val;
//         break;
//     case 0:
//         if (stkTop < size)
//             A[stkTop++] = val;
//         break;
//     default:
//         if (stkTop)
//             return A[--stkTop];
//     }
//     return -1;
// }
// int main()
// {
//     int B[20];
//     A = B;
//     stkTop = -1;
//     stkFunc(-1, 10);
//     stkFunc(0, 5);
//     stkFunc(0, 10);
//     printf("%d\n", stkFunc(1, 0) + stkFunc(1, 0));
// }

// #include <stdio.h>
// int main()
// {
//     int a = 0;
//     switch (1)
//     {
//     case 3 == 1:
//         printf("Runs");
//         break;
//     }
//     printf("%d", a = 5);
// }

#include <stdio.h>
int main()
{
    int i = 5;
    printf("%d", ++i + ++i + ++i);
    printf("\n%d", i);
}