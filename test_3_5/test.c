#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
int count_binary(size_t num)
{
	int count = 0;
	while (num)
	{
		if (num % 2 == 1)
		{
			count++;
		}
		num /= 2;
	}
	return count;
}

int count_binary(int num)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}

int count_binary(int num)
{
	int count = 0;
	while (num)
	{
		num = num & (num - 1);
		count++;
	}
	return count;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = count_binary(num);
	printf("%d", ret);
	return 0;
}