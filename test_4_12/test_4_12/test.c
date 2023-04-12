#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
//    int n, m;
//    scanf("%d %d", &n, &m);
//    // 两个数组的初始化
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    // 第一个数组的输入
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr1[i]);
//    }
//    // 第二个数组的输入
//    for (i = 0; i < m; i++) {
//        scanf("%d", &arr2[i]);
//    }
//    int arr3[2000] = { 0 };
//    i = 0;
//    j = 0;
//    //用 i 指向第一个数组的第一个元素，如果条件满足，就存入目标数组中，同时i++指向第二个元素
//    // j 同理
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
//    // 当其中一个数组赋值完毕后，将另一个数组的剩余元素全部赋值到目标数组当中
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
//    // 打印
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