#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.       只保留该数的最后两位，例如：对KiKi来说1234等价于34；
//2.       如果计算结果大于等于 100， 那么KIKI也仅保留计算结果的最后两位，如果此两位中十位为0，则只保留个位。
/*int main()
{
    unsigned int a, b, sum;
    scanf("%u %u", &a, &b);
    if (a >= 100)
    {
        a %= 100;
    }
    if (b >= 100)
    {
        b %= 100;
    }
    sum = a + b;
    if (sum >= 100)
    {
        sum %= 100;
    }
    printf("%u", sum);
    return 0;
}*/

//BMI指数（即身体质量指数）是用体重公斤数除以身高米数平方得出的数字，是目前国际上常用的衡量人体胖瘦程度以及是否健康的一个标准。
//例如：一个人的身高为1.75米，体重为68千克，
//他的BMI=68/(1.75^2)=22.2（千克/米^2）。当BMI指数为18.5～23.9时属正常，否则表示身体存在健康风险
//int main()
//{
//    float k, m;
//    scanf("%f %f", &k, &m);
//    float bmi = k / (m * m);
//    printf("%f", bmi);
//    if (bmi < 23.9 && bmi> 18.5)
//    {
//        printf("Normal");
//    }
//    else {
//        printf("Abnormal");
//    }
//    return 0;
//}
// 
//小乐乐获得4个最大数，请帮他编程找到最大的数
//int main()
//{
//    int a, b, c, d;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    int max = a;
//    if (max < b)
//        max = b;
//    if (max < c)
//        max = c;
//    if (max < d)
//        max = d;
//    printf("%d", max);
//    return 0;
//}


//判断输入的字符是不是字母
//int main()
//{
//    int c = 0;
//    while (scanf("%c\n", &c) != EOF)
//    {
//        if (c <= 'z' && c >= 'a' || c <= 'Z' && c >= 'A')
//        {
//            printf("%c is an alphabet.\n", c);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", c);
//        }
//    }
//}

//从键盘输入一个整数，请你判断这个整数能被 2 3 7 中哪几个数整除，并按升序输出。如果不能被 2 3 7 任意一个数整除则输出 n。
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if (a % 2 == 0 || a % 3 == 0 || a % 7 == 0)
//    {
//        if (a % 2 == 0)
//        {
//            printf("2 ");
//        }
//        if (a % 3 == 0)
//        {
//            printf("3 ");
//        }
//        if (a % 7 == 0)
//        {
//            printf("7");
//        }
//    }
//    else {
//        printf("n");
//    }
//    return 0;
//}