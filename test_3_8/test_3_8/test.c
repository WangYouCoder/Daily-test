#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//KiKi�ǳ�ϲ����������һ�ҵ�����������һ���·������˽⵽����������ǡ�˫11����11��11�գ�������·���7�ۣ���˫12�� ��12��12�գ�������·���8�ۣ�
//������Ż�ȯ���Զ����50Ԫ���Ż�ȯֻ����˫11��˫12ʹ�ã�����KiKi����������Ǯ����
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

//ţţ���ڼĿ�ݣ����˽⵽����� 1kg ���ڵİ��𲽼� 20 Ԫ���㣬�������ְ�ÿ kg 1Ԫ���㣬���� 1kg ���ְ� 1kg���㡣
//����Ӽ��Ļ�Ҫ���⸶��Ԫ������ţţ�ܹ�Ҫ֧�����ٿ�ݷ�
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

//ţţ��ͨ��·��������ѡ��Ҫô��·��Ҫô�򳵣�ţţ��·���ٶ��� 1m/s ���򳵵��ٶȵ� 10m/s ��
//���Ǵ���Ҫ�ȳ��⳵ 10 s���������ţţ�뾡�쵽��˾Ӧ��ѡ��򳵻�����·��
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