#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void rotate(int* nums, int numsSize, int k) {
//    int arr[1] = { 0 };
//    int i = 0;
//    for (i = 0; i < k; i++)
//    {
//        arr[i] = nums[i + numsSize - k];
//    }
//    for (i = 0; i < numsSize - k; i++)
//    {
//        arr[i + k] = nums[i];
//    }
//    for (i = 0; i < numsSize; i++)
//    {
//        nums[i] = arr[i];
//    }
//    for (i = 0; i < numsSize; i++)
//    {
//        printf("%d",nums[i]);
//    }
//}
//int main()
//{
//    int str[1] = { -1 };
//    rotate(str, 1, 1);
//    return 0;
//}

//  输出n以内的回文数
int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        int tmp = i;
        while (tmp)
        {
            int num = tmp % 10;
            sum = sum * 10 + num;
            tmp /= 10;
        }
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}