#include <stdio.h>

int searchInsert(int *nums, int numsSize, int target)
{
    if (nums == NULL)
        return 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == target)
            return i;
        if (nums[i] > target)
        {
            return i;
        }
    }

    return numsSize;
}

int main()
{
    int nums[] = {1, 3, 5, 6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 5;

    int result = searchInsert(nums, numsSize, target);
    printf("The target %d should be inserted at index: %d\n", target, result);

    target = 2;
    result = searchInsert(nums, numsSize, target);
    printf("The target %d should be inserted at index: %d\n", target, result);

    target = 7;
    result = searchInsert(nums, numsSize, target);
    printf("The target %d should be inserted at index: %d\n", target, result);

    target = 0;
    result = searchInsert(nums, numsSize, target);
    printf("The target %d should be inserted at index: %d\n", target, result);

    return 0;
}
