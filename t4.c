#include <stdio.h>

int main()
{
    int check = 20, arr[] = (10, 20, 30);
    switch (check)
    {
    case arr[0]:
        printf("Gates");
    case arr[1]:
        printf("Quiz");
    case arr[2]:
        printf("GatesQuiz");
    }
    return 0;
}