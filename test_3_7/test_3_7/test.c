#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//计算水仙花数
int main()
{
	int i = 0;
	for (i = 0; i <= 10000; i++)
	{
		//先计算出几位数
		int tmp = i;
		int n = 1;
		while (tmp /= 10)
		{
			n++;
		}
		//求和
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		//判断
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}