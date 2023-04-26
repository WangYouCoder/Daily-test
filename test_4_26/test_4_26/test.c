#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
//int main()
//{
//	int a = -123;
//	int b = a % 10;
//	a /= 10;
//	printf("%d %d", a, b);
//	return 0;
//}


int reverse(int x) {
    long long num = 0;
    while (x)
    {
        int tmp = x % 10;
        num = num * 10 + tmp;
        x /= 10;
    }
    if (num > INT_MAX || num < INT_MIN)
    {
        return 0;
    }
    else
    {
        return num;
    }
}