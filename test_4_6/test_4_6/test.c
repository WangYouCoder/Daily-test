#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    double sum = 0;
    for (i = 1; i <= n; i++)
    {
        int j = 0;
        double num = 0;
        int flag = 1;
        for (j = 1; j <= i; j++)
        {
            num = num + (2 * j - 1) * flag;
            flag = -flag;
        }
        sum = sum + 1.0 / num;
    }
    printf("%.3f", sum);
    return 0;
}