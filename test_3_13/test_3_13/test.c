#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//输出牛牛应该往哪个方向伸手。例
//(x, y) = (0, 0) (x1, y1) = (0, 1) ，则牛牛向上伸手，输出 'u' 。
//(x, y) = (0, 0) (x1, y1) = (0, -1) ，则牛牛向下伸手，输出 'd'。
//(x, y) = (0, 0) (x1, y1) = (1, 0) ，则牛牛向右伸手，输出 'r'。
//(x, y) = (0, 0) (x1, y1) = (-1, 0) ，则牛牛向左伸手，输出 'l'。
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

//针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出“Equilateral triangle!”，等腰三角形则输出“Isosceles triangle!”，
//其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”。
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

//牛牛有一个学习计划，他计划在 y 年 m 月 d 日开始学习，但在之前他是绝不会开始学习的，
//但是他一旦开始学习就不会停下来，请你判断 y1 年 m1 月 d1 日牛牛应该学习吗。
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
//从键盘输入a, b, c的值，编程计算并输出一元二次方程ax2 + bx + c = 0的根，当a = 0时，输出“Not quadratic equation”，
//当a ≠ 0时，根据△ = b2 - 4*a*c的三种情况计算并输出方程的根。
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