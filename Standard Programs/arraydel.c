#include <stdio.h>

// Function to delete an element from a specific position
void deleteElement(int arr[], int *n, int position)
{
    if (position < 0 || position >= *n)
    {
        printf("Invalid position!\n");
        return;
    }
    // Shift elements to the left
    for (int i = position; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*n)--; // Reduce the size of the array
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int position = 2; // Example: deleting the element at index 2

    // Display the original array
    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Delete the element
    deleteElement(arr, &n, position);

    // Display the resultant array
    printf("Array after deletion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
