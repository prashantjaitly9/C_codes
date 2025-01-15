#include <stdio.h>

int main()
{
    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}};

    int rows = 3, cols = 3; // Array dimensions
    int rowIndex, colIndex;

    printf("Enter the row index (0 to %d): ", rows - 1);
    scanf("%d", &rowIndex);
    printf("Enter the column index (0 to %d): ", cols - 1);
    scanf("%d", &colIndex);

    if (rowIndex >= 0 && rowIndex < rows && colIndex >= 0 && colIndex < cols)
    {
        printf("Element at arr[%d][%d] = %d\n", rowIndex, colIndex, arr[rowIndex][colIndex]);
    }
    else
    {
        printf("Invalid indices!\n");
    }

    return 0;
}
