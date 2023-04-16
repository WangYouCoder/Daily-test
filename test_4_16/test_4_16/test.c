#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", a);
//	return 0;
//}

//删除数组中的重复项
int removeDuplicates(int* nums, int numsSize) {
    int i = 0;
    while (i < numsSize - 1)
    {
        if (nums[i] < nums[i + 1])
        {
            i++;
        }
        else
        {
            int j = i;
            while (j < numsSize - 1)
            {
                nums[j] = nums[j + 1];
                j++;
            }
            numsSize--;
        }
    }
    return numsSize;
}
int main()
{
    int arr[10] = { 1,1,1,2,2,3,3,4,4,5 };
    int ret = removeDuplicates(arr, 10);
    int i = 0;
    for (i = 0; i < ret; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
