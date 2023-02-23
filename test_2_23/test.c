#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("arr = %p\n", arr);
//	printf("&arr= %p\n", &arr);
//	printf("arr+1 = %p\n", arr + 1);
//	printf("&arr+1= %p\n", &arr + 1);
//	return 0;
//}

//#include <stdio.h>
//int add(int a, int b)
//{
//    return a + b;
//}
//int sub(int a, int b)
//{
//    return a - b;
//}
//int mul(int a, int b)
//{
//    return a * b;
//}
//int div(int a, int b)
//{
//    return a / b;
//}
//int main()
//{
//    int x, y;
//    int input = 1;
//    int ret = 0;
//    int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //转移表
//    while (input)
//    {
//        printf("*************************\n");
//        printf(" 1:add           2:sub \n");
//        printf(" 3:mul           4:div \n");
//        printf("*************************\n");
//        printf("请选择：");
//        scanf("%d", &input);
//        if ((input <= 4 && input >= 1))
//        {
//            printf("输入操作数：");
//            scanf("%d %d", &x, &y);
//            ret = (*p[input])(x, y);
//        }
//        else
//            printf("输入有误\n");
//        printf("ret = %d\n", ret);
//    }
//    return 0;
//}

//void reverse(char* arr,int n)
//{
//	int len = strlen(arr);
//	n %= len;
//	while (n--)
//	{
//		int sz = len - 1;
//		int i = 0;
//		char ch = arr[0];
//		while (sz--)
//		{
//			arr[i] = arr[i + 1];
//			i++;
//		}
//		arr[len - 1] = ch;
//	}
//}
//int main()
//{
//	char arr[10] = "ABCD";
//	int n = 0;
//	scanf("%d", &n);
//	reverse(arr,n);
//	printf("%s", arr);
//	return 0;
//}

//
//void Find(int arr[][3],int k)
//{
//	int i = 0;
//	int j = 2;
//
//	while (i >= 0 && i < 3 && j >= 0 && j < 3)
//	{
//		if (arr[i][j] > k)
//		{
//			j--;
//		}
//		else if(arr[i][j] < k)
//		{
//			i++;
//		}
//		if(arr[i][j] == k)
//		{
//			printf("存在，这个数的下标为:>%d %d", i, j);
//			break;
//		}
//	}
//	if (i < 0 || j < 0 || i >= 3 || j >= 3)
//	{
//		printf("没找到\n");
//
//	}
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 6;
//	Find(arr,k);
//	return 0;
//}

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串


int Is_spin(char* arr, char* str)
{
	char* s1 = arr;
	char* s2 = str;
	char* tmp = s1;
	while (tmp)
	{
		s1 = tmp;
		while (*s1 == *s2 && *s1 && *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return 1;
		}
		s2 = str;
		tmp++;
	}
	return 0;
}
int main()
{
	char arr[20] = "AABCD";
	char str[20] = "BCDAA";
	int len = strlen(arr);
	memmove(arr + len, arr,5);
	int ret = Is_spin(arr, str);
	if (ret == 1)
	{
		printf("是\n");
	}
	else
	{
		printf("不是\n");
	}
	return 0;
}










//char* my_strstr(const char* arr, const char* str)
//{
//	const char* s1 = arr;
//	const char* s2 = str;
//	const char* tmp = s1;
//	while (tmp)
//	{
//		s1 = tmp;
//		s2 = str;
//		while (*s1 == *s2 && *s1 && *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)tmp;
//		}
//		tmp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr[20] = "abbbcd";
//	char str[20] = "bbc";
//	char* ret = my_strstr(arr, str);
//	if (ret != NULL)
//	{
//		printf("找到了:%s\n", ret);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

