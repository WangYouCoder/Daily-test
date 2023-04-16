#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//打印X型图案
//  将X看成是两条斜线组成 如: / \

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i, j;
//        for (i = 0; i < n; i++)//控制层数
//        {
//            for (j = 1; j <= n; j++)//控制每层打印个数
//            {
//                if ((j - 1) == i || (i + j) == n)// (j - 1) == i 控制 \   (i + j) == n 控制 /
//                {
//                    printf("*");
//                }
//                else {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//打印空心正方形

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i, j;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (i == 1 || i == n)
                {
                    printf("* ");
                }
                else if (j == 1 || j == n) {
                    printf("* ");
                }
                else {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}