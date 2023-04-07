#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int flag = 0;
//    for (i = n; i <= m; i++)
//    int sum = 0;
//    {
//        int sum = 0;
//
//        int tmp = i;
//        while (tmp)
//        {
//            int num = tmp % 10;
//            sum = sum + num * num * num;
//            tmp /= 10;
//        }
//        if (sum == i)
//        {
//            printf("%d ", i);
//            flag = 1;
//        }
//        if (i == m && flag == 0)
//        {
//            printf("no");
//        }
//    }
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    int n = 0;
//    for (i = 10000; i <= 99999; i++)
//    {
//        n = (i % 10) * (i / 10) + (i % 100) * (i / 100) + (i % 1000) * (i / 1000) + (i % 10000) * (i / 10000);
//        if (n == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
// 
// 
int main()
{

    int i = 0;

    for (i = 10000; i <= 99999; i++)
    {
        int sum = 0;
        int m = 10;

        while (m != 100000)
        {
            int tmp = i;
            int num = tmp % m;
            tmp = tmp / m;
            sum = sum + num * tmp;
            m = m * 10;
        }
        if (i == sum)
        {
            printf("%d ", i);
        }
    }
    return 0;
}