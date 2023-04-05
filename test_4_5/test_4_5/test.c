#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<ctype.h>
//模拟实现atoi

//int state = 1;
//int my_atoi(char* str)
//{
//	//1.防止出现空指针
//	assert(*str);
//
//	//2.空字符串
//	if (!*str)
//	{
//		return 0;
//	}
//
//	//3.+ -
//	int flag = 1;
//	if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	else if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//
//	long long ret = 0;
//	while (*str)
//	{
//		if (isdigit(*str))
//		{
//			//越界情况
//			ret = ret * 10 + (*str - '0') * flag;
//			if (ret<INT_MIN || ret>INT_MAX)
//			{
//				state = 0;
//				return (int)ret;
//			}
//		}
//		else
//		{
//			return (int)ret;
//		}
//		str++;
//	}
//	return (int)ret;
//}
//int main()
//{
//	char* str = "-1234";
//	int ret = my_atoi(str);
//	if (state == 0)
//	{
//		printf("非法转换:%d", ret);
//
//	}
//	else
//	{
//		printf("合法转换:%d", ret);
//	}
//	return 0;
//}

//#define OFFSETOF(type,name) (size_t)&(((type*)0)->name)
//typedef struct S
//{
//	int a;
//	double d;
//	char c;
//}S;
//int main()
//{
//	S s = { 0 };
//	printf("%d\n", OFFSETOF(S, a));
//	printf("%d\n", OFFSETOF(S, c));
//	printf("%d\n", OFFSETOF(S, d));
//	return 0;
//}

#define SWAP(x) (((x & 0x55555555)<<1) + ((x & 0xaaaaaaaa)>>1))
int main() 
{
	int a = 5;
	//0000 0000 0000 0000 0000 0000 0000 0101
	a = SWAP(a);
	//0000 0000 0000 0000 0000 0000 0000 1010 ->10
	printf("%d", a);
	return 0;
}