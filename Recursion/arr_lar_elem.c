#include <stdio.h>

// Recursive function to find the largest element
int findLargest(int arr[], int n)
{
    // Base case: if the array has only one element
    if (n == 1)
    {
        return arr[0];
    }

    // Recursive case: get the largest element in the rest of the array
    int max = findLargest(arr, n - 1);

    // Compare the last element with the maximum of the rest
    if (arr[n - 1] > max)
    {
        return arr[n - 1];
    }
    else
    {
        return max;
    }
}

int main()
{
    int arr[100], n;

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find and display the largest element
    int largest = findLargest(arr, n);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
