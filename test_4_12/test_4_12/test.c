#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
//    int n, m;
//    scanf("%d %d", &n, &m);
//    // ��������ĳ�ʼ��
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    // ��һ�����������
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr1[i]);
//    }
//    // �ڶ������������
//    for (i = 0; i < m; i++) {
//        scanf("%d", &arr2[i]);
//    }
//    int arr3[2000] = { 0 };
//    i = 0;
//    j = 0;
//    //�� i ָ���һ������ĵ�һ��Ԫ�أ�����������㣬�ʹ���Ŀ�������У�ͬʱi++ָ��ڶ���Ԫ��
//    // j ͬ��
//    while (i < n && j < m) {
//        if (arr1[i] < arr2[j]) {
//            arr3[k] = arr1[i];
//            i++;
//            k++;
//        }
//        else {
//            arr3[k] = arr2[j];
//            j++;
//            k++;
//        }
//    }
//    // ������һ�����鸳ֵ��Ϻ󣬽���һ�������ʣ��Ԫ��ȫ����ֵ��Ŀ�����鵱��
//       if(i == n)
//     {
//         for(i = j;i<m; i++)
//         {
//             arr3[k] = arr2[i];
//             k++;
//         }
//     }
//       if (j == m)
//       {
//           for (; i < m; i++)
//           {
//               arr3[k] = arr1[i];
//               k++;
//           }
//       }
//    // ��ӡ
//    for (k = 0; k < m + n; k++) {
//        printf("%d ", arr3[k]);
//    }
//    return 0;
//}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int end1 = m - 1;
    int end2 = n - 1;
    int end = m + n - 1;
    while (end1 >= 0 && end2 >= 0)
    {
        if (nums1[end1] > nums2[end2])
        {
            nums1[end] = nums1[end1];
            end1--;
        }
        else
        {
            nums1[end] = nums2[end2];
            end2--;
        }
        end--;
    }
    if (end1 < 0)
    {
        while (end2 >= 0)
        {
            nums1[end] = nums2[end2];
            end2--;
            end--;
        }
    }
}