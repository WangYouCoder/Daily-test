#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
#include<string.h>
int myAtoi(char* s) {
    int flag = 1;
    int i = 0;
    //����ո�
    while (s[i] == ' ')
    {
        i++;
    }

    //������
    if (s[i] == '+')
    {
        flag = 1;
        i++;
    }
    else if (s[i] == '-')
    {
        flag = -1;
        i++;
    }

    //��ȡ�ַ�
    int j = i;

    while (s[j] >= '0' && s[j] <= '9')
    {
        j++;
    }
    s[j] = '\0';

    //תΪ����
    long long num = 0;
    while (s[i] != '\0')
    {
        int tmp = s[i] - '0';
        num = num * 10 + tmp * flag;
        if (num < INT_MIN)
        {
            num = INT_MIN;
            break;
        }
        else if (num > INT_MAX)
        {
            num = INT_MAX;
            break;
        }
        i++;
    }
    return num;
}
