#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.       ֻ���������������λ�����磺��KiKi��˵1234�ȼ���34��
//2.       ������������ڵ��� 100�� ��ôKIKIҲ�������������������λ���������λ��ʮλΪ0����ֻ������λ��
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

//BMIָ��������������ָ�����������ع����������������ƽ���ó������֣���Ŀǰ�����ϳ��õĺ����������ݳ̶��Լ��Ƿ񽡿���һ����׼��
//���磺һ���˵����Ϊ1.75�ף�����Ϊ68ǧ�ˣ�
//����BMI=68/(1.75^2)=22.2��ǧ��/��^2������BMIָ��Ϊ18.5��23.9ʱ�������������ʾ������ڽ�������
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
//С���ֻ��4������������������ҵ�������
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


//�ж�������ַ��ǲ�����ĸ
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

//�Ӽ�������һ�������������ж���������ܱ� 2 3 7 ���ļ������������������������������ܱ� 2 3 7 ����һ������������� n��
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