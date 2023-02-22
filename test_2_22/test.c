#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//             猜名次
//int main()
//{
//	int A, B, C, D, E;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= 5; B++)
//		{
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1; D <= 5; D++)
//				{
//					for (E = 1; E <= 5; E++)
//					{
//						if ((B == 2) + (A == 3) == 1 &&
//							(B == 2) + (E == 4) == 1 &&
//							(C == 1) + (D == 2) == 1 &&
//							(C == 5) + (D == 3) == 1 &&
//							(E == 4) + (A == 1) == 1)
//						{
//							if (A * B * C * D * E == 120)
//							{
//								printf("A是第%d名\nB是第%d名\nC是第%d名\nD是第%d名\nE是第%d名\n", A, B, C, D, E);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//猜凶手
//int main()
//{
//	int killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if (('A' != killer) + ('C' == killer) + ('D' == killer) + ('D' != killer) == 3)
//		{
//			printf("凶手是%c", killer);
//		}
//	}
//	return 0;
//}

//打印杨辉三角
int main()
{
	int n = 0;
	scanf("%d", &n); //打印几行
	int arr[100][100] = { 0 };
	int i, j;
	for (i = 0; i < n; i++)
	{
		arr[i][0] = 1;
		for (j = 1; j <= i; j++)
		{
			if (i == j)
			{
				arr[i][j] = 1;
				break;
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}