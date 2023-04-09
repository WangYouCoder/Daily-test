#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//    int k = 0;
//    scanf("%d", &k);
//    int i, j;
//    int count = 0;
//    int sum = 0;
//    for (i = 1; i <= k; i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            sum = sum + i;
//            count++;
//            if (count == k)
//            {
//                printf("%d", sum);
//                return 0;
//            }
//        }
//    }
//    return 0;
//}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[] = { 0 };
    int i = 0;
    for (i = 1; i <= n; i++)
    {
        int j = 0;

        int tmp = i;
        while (tmp)
        {
            tmp = tmp % 10;
            arr[j] = tmp;
            j++;
            tmp = tmp / 10;
        }
        int sz = sizeof(arr) / sizeof(arr[0]);
        int sum = 0;
        for (j = 0; j < sz; j++)
        {
            sum = sum * 10 + arr[j];
        }
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}