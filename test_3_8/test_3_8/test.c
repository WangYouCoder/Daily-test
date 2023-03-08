#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，如果今天是“双11”（11月11日）则这件衣服打7折，“双12” （12月12日）则这件衣服打8折，
//如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），求KiKi最终所花的钱数。
//int main()
//{
//    double val = 0;
//    int month, day, flag;
//    double money = 0;
//    scanf("%lf %d %d %d", &val, &month, &day, &flag);
//    if (flag == 1)
//    {
//        if (month == 11 && day == 11)
//        {
//            money = val * 0.7 - 50;
//            if (money <= 0)
//            {
//                printf("0.00");
//            }
//            else
//            {
//                printf("%.2lf", money);
//            }
//        }
//        else {
//            money = val * 0.8 - 50;
//            if (money <= 0)
//            {
//                printf("0.00");
//            }
//            else {
//                printf("%.2lf", money);
//            }
//        }
//    }
//    else {
//        if (month == 11 && day == 11)
//        {
//            money = val * 0.7;
//            printf("%.2lf", money);
//        }
//        else {
//            money = val * 0.8;
//            printf("%.2lf", money);
//        }
//    }
//    return 0;
//}

//牛牛正在寄快递，他了解到快递在 1kg 以内的按起步价 20 元计算，超出部分按每 kg 1元计算，不足 1kg 部分按 1kg计算。
//如果加急的话要额外付五元，请问牛牛总共要支付多少快递费
//int main()
//{
//    float k = 0;
//    char b = 0;
//    int money = 0;
//    scanf("%f %c",&k,&b);
//    if(b == 'y')
//    {
//        if(k <= 1)
//        {
//            money = 25;
//            printf("%d",money);
//        }
//        else {
//            int n = k;
//            if(k == n)
//            {
//                money = (n - 1) + 20 + 5;
//                printf("%d",money);
//            }
//            else {
//                money = n + 20 + 5;
//                printf("%d",money);
//            }
//        }
//    }
//    else {
//        if(k <= 1)
//        {
//            money = 20;
//            printf("%d",money);
//        }
//        else {
//            int n = k;
//            if(k == n)
//            {
//                money = (n - 1) + 20;
//                printf("%d",money);
//            }
//            else {
//                money = n + 20;
//                printf("%d",money);
//            }
//        }
//    }
//    return 0;
//}

//牛牛的通勤路上有两种选择，要么走路，要么打车，牛牛走路的速度是 1m/s 。打车的速度的 10m/s ，
//但是打车需要等出租车 10 s，请你计算牛牛想尽快到公司应该选择打车还是走路。
int main()
{
    float x = 10 / 9;
    int m = 0;
    scanf("%d", &m);
    if (m <= x + 10)
    {
        printf("w");
    }
    else {
        printf("v");
    }
    return 0;
}