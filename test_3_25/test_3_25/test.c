#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��������һ��������N��ͳ��1~N֮�������ĸ�����ż���ĸ������������
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int a = 0;
//    int b = 0;
//    for (i = 1; i <= n; i++)
//    {
//        if (i % 2 == 0)
//        {
//            a++;
//        }
//        else {
//            b++;
//        }
//    }
//    printf("%d %d", b, a);
//    return 0;
//}


int main()
{
    int i = 0;
    int count = 0;
    for (i = 100; i <= 999; i++)
    {
        int j = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}