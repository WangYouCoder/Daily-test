#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int arr[nums1Size + nums2Size];
    int i = 0, j = 0, k = 0;
    while (i < nums1Size && j < nums2Size)//合并到一个数组中
    {
        if (nums1[i] < nums2[j])
        {
            arr[k] = nums1[i];
            i++;
        }
        else
        {
            arr[k] = nums2[j];
            j++;
        }
        k++;
    }

    if (i == nums1Size)//说明nums1移除完毕，将nums2剩下的全部放过去
    {
        while (j < nums2Size)
        {
            arr[k++] = nums2[j++];
        }
    }

    if (j == nums2Size)//同理
    {
        while (i < nums1Size)
        {
            arr[k++] = nums1[i++];
        }
    }

    int left = 0, right = nums1Size + nums2Size - 1;
    while (left < right)//找到中间位置
    {
        left++;
        right--;
    }

    if (left == right)//说明是奇数，直接返回
    {
        return arr[left];
    }
    else//说明是偶数，两者相加/2即可
    {
        return (arr[left] + arr[right]) / 2.0;
    }
}