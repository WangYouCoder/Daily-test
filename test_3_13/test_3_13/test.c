#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���ţţӦ�����ĸ��������֡���
//(x, y) = (0, 0) (x1, y1) = (0, 1) ����ţţ�������֣���� 'u' ��
//(x, y) = (0, 0) (x1, y1) = (0, -1) ����ţţ�������֣���� 'd'��
//(x, y) = (0, 0) (x1, y1) = (1, 0) ����ţţ�������֣���� 'r'��
//(x, y) = (0, 0) (x1, y1) = (-1, 0) ����ţţ�������֣���� 'l'��
//int main()
//{
//    int x, y;
//    scanf("%d %d", &x, &y);
//    int x1, y1;
//    scanf("%d %d", &x1, &y1);
//    if (x - x1 == 1)
//    {
//        printf("l");
//    }
//    if (x - x1 == -1)
//    {
//        printf("r");
//    }
//    if (y - y1 == 1)
//    {
//        printf("d");
//    }
//    if (y - y1 == -1)
//    {
//        printf("u");
//    }
//    return 0;
//}

//���ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ��������������Equilateral triangle!���������������������Isosceles triangle!����
//������������������Ordinary triangle!������֮�����Not a triangle!����
//int main()
//{
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            if (a == b && b == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a == b || b == c || c == a)
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//
//    return 0;
//}

//ţţ��һ��ѧϰ�ƻ������ƻ��� y �� m �� d �տ�ʼѧϰ������֮ǰ���Ǿ����Ὺʼѧϰ�ģ�
//������һ����ʼѧϰ�Ͳ���ͣ�����������ж� y1 �� m1 �� d1 ��ţţӦ��ѧϰ��
//int main()
//{
//    int y, m, d;
//    scanf("%d %d %d", &y, &m, &d);
//    int y1, m1, d1;
//    scanf("%d %d %d", &y1, &m1, &d1);
//    if (y1 > y)
//    {
//        printf("yes");
//    }
//    else if (y1 == y)
//    {
//        if (m1 > m)
//        {
//            printf("yes");
//        }
//        else if (m1 == m)
//        {
//            if (d1 >= d)
//            {
//                printf("yes");
//            }
//            else
//            {
//                printf("no");
//            }
//        }
//        else
//        {
//            printf("no");
//        }
//    }
//    else
//    {
//        printf("no");
//    }
//    return 0;
//}
#include<math.h>
//�Ӽ�������a, b, c��ֵ����̼��㲢���һԪ���η���ax2 + bx + c = 0�ĸ�����a = 0ʱ�������Not quadratic equation����
//��a �� 0ʱ�����ݡ� = b2 - 4*a*c������������㲢������̵ĸ���
int main() {
    float a, b, c;
    while (scanf("%f %f %f", &a, &b, &c) != EOF) {
        float s;
        if (a == 0) {
            printf("Not quadratic equation\n");
        }
        else {
            s = b * b - 4 * a * c;
            if (s == 0) {
                if (b == 0) {
                    printf("x1=x2=0.00\n");
                }
                else {
                    printf("x1=x2=%.2f\n", -b / (2 * a));
                }

            }
            if (s > 0) {
                printf("x1=%.2f;x2=%.2f\n", (-b - sqrt(s)) / (2 * a), (-b + sqrt(s)) / (2 * a));
            }
            if (s < 0) {
                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", -b / (2 * a), sqrt(-s) / (2 * a),
                    -b / (2 * a), sqrt(-s) / (2 * a));
            }
        }
    }
    return 0;
}