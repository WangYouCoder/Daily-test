#define _CRT_SECURE_NO_WARNINGS 1
// 模拟实现sqort函数
#include<stdio.h>
#include<string.h>
typedef struct Stu
{
	char name[20];  //姓名
	int num;  //学号
}S;

int cmp(void* e1,void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int cmp_num(void* e1, void* e2)
{
	return ((S*)e1)->num - ((S*)e2)->num;
}

int cmp_name(void* e1, void* e2)
{
	return strcmp(((S*)e1)->name, ((S*)e2)->name);
}

void print_S(S arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("姓名:%s 学号:%d\n", arr[i].name, arr[i].num);
	}
}
void print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void swap(char* e1, char* e2, int width)
{
	int count = 0;
	while (count < width)
	{
		char ch = *e1;
		*e1 = *e2;
		*e2 = ch;
		count++;
		*e1++;
		*e2++;
	}
}
void my_sqort(void* base, int sz, int width, int (*pf)(void* e1, void* w2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (pf((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void test()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(arr[0]);
	my_sqort(arr, sz, width, cmp);
	print(arr, sz);
}

void test1()
{
	S arr[] = { { "张三",1002 },{ "李四",1001 },{ "王五",1003 } };
	int sz = sizeof(arr)/sizeof(arr[0]);
	int width = sizeof(S);
	my_sqort(arr, sz, width, cmp_num);
	print_S(arr , sz);
	printf("\n");
	my_sqort(arr, sz, width, cmp_name);
	print_S(arr, sz);
} 
int main()
{
	//test();
	test1();
	return 0;
}