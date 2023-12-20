#include <stdio.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *array = malloc(2 * sizeof(int));
    array[0] = 1;
    array[1] = 0;
    for (int i = 0; i < numsSize; ++i)
    {
        for (int j = i + 1; j < numsSize; ++j)
        {
            if (nums[i] + nums[j] == target)
            {
                *returnSize = 2;
                array[0] = i;
                array[1] = j;
                return array;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}