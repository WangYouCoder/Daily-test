#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define maxn 64
//int a[maxn + 1][maxn + 1] = { 0 };
//void gamecal(int k, int n);
//void gamecal(int k, int n)//处理编号k开始的n个选手的日程 
//{
//    int i, j;
//    if (n == 2)
//    {
//        a[k][1] = k;//参赛选手编号 
//        a[k][2] = k + 1;//对阵选手编号 
//        a[k + 1][1] = k + 1;//参赛选手编号 
//        a[k + 1][2] = k;//对阵选手编号   2号选手对阵1号选手 
//    }
//    else {
//        gamecal(k, n / 2);
//        gamecal(k + n / 2, n / 2); // 以四个选手为例，3号选手开始安排2名选手 
//        for (i = k; i < k + n / 2; i++)//填充矩阵右上角 
//        {
//            for (j = n / 2 + 1; j <= n; j++)
//            {
//                a[i][j] = a[i + n / 2][j - n / 2];
//            }
//        }
//        for (i = k + n / 2; i < k + n; i++)//填充矩阵右下角 
//        {
//            for (j = 1 + n / 2; j <= n; j++)
//            {
//                a[i][j] = a[i - n / 2][j - n / 2];
//            }
//        }
//    }
//}
//int main() {
//    int m, i, j;
//    printf("请输入参赛选手的人数:");
//    scanf("%d", &m);
//    j = 2;
//    for (i = 2; i < 8; i++)//判断是否为2的整数次幂
//    {
//        j = j * 2;
//        if (j == m) break;
//    }
//    if (i >= 8)
//    {
//        printf("参赛选手人数必须为2的整数次幂，且不超过64！\n");
//        return 0;
//    }
//    gamecal(1, m);
//    printf("\n编号");
//    for (i = 2; i <= m; i++)
//        printf("%2d天", i - 1);
//    printf("\n");
//    for (i = 1; i <= m; i++)
//    {
//        for (j = 1; j <= m; j++)
//            printf("%4d", a[i][j]);//将全局变量数组a[][]整合输出。
//        printf("\n");
//    }
//    return 0;
//}

void rotate(int nums[], int numsSize, int k) {
    while (k--)
    {
        int tmp = nums[numsSize - 1];
        for (int i = numsSize - 1; i >= 0; i--)
        {
            nums[i] = nums[i - 1];
        }
        nums[0] = tmp;
    }
    return nums;
}
int main()
{
	int arr[7] = { 1,2,3,4,5,6,7 };
    rotate(arr, 7, 3);
    printf(arr);
    return 0;
}


