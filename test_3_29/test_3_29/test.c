#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�
//���磺
//�������Ԫ���ǣ�1��2��3��4��5��1��2��3��4��6
//ֻ��5��6ֻ����1�Σ�Ҫ�ҳ�5��6.

//void find(int arr[],int sz)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//			pos = i;
//		break;
//	}
//	int x = 0;
//	int y = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			x ^= arr[i];
//		}
//		else
//		{
//			y ^= arr[i];
//		}
//	}
//	printf("����Ϊ:%d %d", x, y);
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find(arr,sz);
//	return 0;
//}
//  ģ��ʵ��strncpy

char* my_strncpy(char* dest, char* src, int count)
{
	char* tmp = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest = *src)
	{
		dest++;
		src++;
	}
	return tmp;
}
int main()
{
	char arr[20] = "hellow ";
	char str[20] = "world";
	char* tmp = my_strncpy(arr, str, 5);
	printf("%s", tmp);
	return 0;
}