#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ӡX��ͼ��
//  ��X����������б����� ��: / \

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i, j;
//        for (i = 0; i < n; i++)//���Ʋ���
//        {
//            for (j = 1; j <= n; j++)//����ÿ���ӡ����
//            {
//                if ((j - 1) == i || (i + j) == n)// (j - 1) == i ���� \   (i + j) == n ���� /
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

//��ӡ����������

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