#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
	//char a = 256;
	////0000 0000 0000 0000 0000 0001 0000 0000  一个字节8个bit位
	////截断:0000 0000
	//char b = 257;
	////0000 0000 0000 0000 0000 0001 0000 0001
	////截断:0000 0001
	//printf("%d\n", a);
	//printf("%d\n", b);
	//return 0;

	//char a = 3;
	////0000 0000 0000 0000 0000 0000 0000 0011
	////0000 0011 发生截断

	//char b = 127;
	////0000 0000 0000 0000 0000 0000 0111 1111
	////0011 1111 截断

	//char c = a + b;
	////先将 a 整形提升:0000 0000 0000 0000 0000 0000 0000 0011
	////     b 整形提升:0000 0000 0000 0000 0000 0000 0111 1111
	// 
	////c 的值:0000 0000 0000 0000 0000 0000 1000 0010
	////发生截断:1000 0010
	////整形提升:1111 1111 1111 1111 1111 1111 1000 0010 
	//printf("%d", c);
	////1111 1111 1111 1111 1111 1111 1000 0010 补码
	////1000 0000 0000 0000 0000 0000 0111 1101 反码
	////1000 0000 0000 0000 0000 0000 0111 1100 原码
	////-126

	//char a = 0xb6;
	//short b = 0xb600;
	//int c = 0xb6000000;
	//if (a == 0xb6)
	//{
	//	printf("a");
	//}
	//if (b == 0xb600)
	//{
	//	printf("b");
	//}
	//if (c == 0xb6000000)
	//{
	//	printf("c");
	//}
	//return 0;

	/*int a = 0xb6;
	printf("%d", a);
	return 0;*/
	//0100 1000

	/*
	char c = 1;
	char d = 2;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(c+d));
	return 0;*/
//}
	//KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天
int main()
{
	int y = 0;
	int m = 0;
	while (scanf("%d %d", &y, &m) != EOF)
	{
		int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		{
			arr[2] = 29;
		}
		printf("%d\n", arr[m]);
	}
	return 0;
}
