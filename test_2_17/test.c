#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//ʵ�ֵ��ʵĵ��ã��磺I love you ��� you love I
//
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char ch = *left;
//		*left = *right;
//		*right = ch;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	int c = getchar();
//	int i = 0;
//	while (c != '\n')
//	{
//		arr[i] = c;
//		i++;
//		c = getchar();
//	}
//	char* left = arr;
//	char* right = arr;
//	int len = strlen(arr);
//	//�������仰
//	reverse(arr, arr + len - 1);
//	while (*(right) != '\0')  //����'\0'����ѭ��
//	{
//		right = left;
//		while ((*right) != ' ' && (*right) != '\0')   //�ҵ���һ���ո�
//		{
//			right++;
//		}
//		reverse(left, right - 1);  //��������һ������
//		left = right + 1;    //ָ����һ������
//	}
//	printf("%s", arr);
//	return 0;
//}

//         ģ��ʵ��memcpy
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		src = (char*)src + 1;
//		dest = (char*)dest + 1;
//	}
//	return ret;
//}
//void print(int arr[], int sz)  //  ��ӡ����
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1 + 2, 20);
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	print(arr2, sz);
//	return 0;
//}

//       ģ��ʵ��strcpy

//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr[20] = "hello world";
//	char str[20] = { 0 };
//	my_strcpy(str, arr);
//	printf("%s", str);
//	return 0;
//}

//     ģ��ʵ��memmove
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)       //  ��ǰ���󿽱�
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)   //  �Ӻ���ǰ����
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//void print(int* arr, int sz)  //  ��ӡ����
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	my_memmove(arr, arr + 2, 20);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//        ģ��ʵ��strcat

//void my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	int len = strlen(dest);
//	while (*(dest + len) = *(src))
//	{
//		dest++;
//		src++;
//	}
//}
//int main()
//{
//	char arr[20] = "hello ";
//	char str[20] = "world";
//	my_strcat(arr, str);
//	printf("%s", arr);
//	return 0;
//}


//    ģ��ʵ��strncat

//void my_strcat(char* dest, const char* src,size_t num)
//{
//	assert(dest && src);
//	int len = strlen(dest);
//	while (num--)
//	{
//		*(dest + len) = *(src);
//		dest++;
//		src++;
//	}
//}
//int main()
//{
//	char arr[20] = "hello ";
//	char str[20] = "world";
//	my_strcat(arr, str,4);
//	printf("%s", arr);
//	return 0;
//}
