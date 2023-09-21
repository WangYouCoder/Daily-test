#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 21;
//	a ^= (1 << 5) - 1;
//	printf("%d", a);
//	return 0;
//}

int main()
{
	int a = 0, b = 1, c = 2;
	if (a == 0 || b++ == 1)
	{
		if (b != 1 || c-- != 2)
		{
			printf("%d,%d,%d", a, b, c);
		}
		else
		{
			printf("%d,%d,%d", a, b, c);
		}
	}

	return 0;
}