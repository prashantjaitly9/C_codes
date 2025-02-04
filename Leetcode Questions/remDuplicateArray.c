#include <stdio.h>

int removeDuplicates(int *nums, int numsSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
            {
                int x = 0;
                // remove j
                for (x = j; x < numsSize - 1; x++)
                {
                    nums[x] = nums[x + 1];
                }
                numsSize--;
                j--;
            }
        }
    }

    return numsSize;
}

int main()
{
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int numsSize = 10;
    int newSize = removeDuplicates(nums, numsSize);
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}