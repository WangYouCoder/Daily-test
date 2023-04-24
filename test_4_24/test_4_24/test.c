#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int arr[nums1Size + nums2Size];
    int i = 0, j = 0, k = 0;
    while (i < nums1Size && j < nums2Size)//�ϲ���һ��������
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

    if (i == nums1Size)//˵��nums1�Ƴ���ϣ���nums2ʣ�µ�ȫ���Ź�ȥ
    {
        while (j < nums2Size)
        {
            arr[k++] = nums2[j++];
        }
    }

    if (j == nums2Size)//ͬ��
    {
        while (i < nums1Size)
        {
            arr[k++] = nums1[i++];
        }
    }

    int left = 0, right = nums1Size + nums2Size - 1;
    while (left < right)//�ҵ��м�λ��
    {
        left++;
        right--;
    }

    if (left == right)//˵����������ֱ�ӷ���
    {
        return arr[left];
    }
    else//˵����ż�����������/2����
    {
        return (arr[left] + arr[right]) / 2.0;
    }
}