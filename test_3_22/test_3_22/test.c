#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);
//    return 0;
//}

//С��������Ӵ�����ͷ��Ŧ����������Ľ��������С���ֺܱ���������������
//int main()
//{
//    long long i, n = 0;
//    scanf("%lld", &n);
//    long long sum = 0;
//    for (i = 1; i <= n; i++)
//    {
//        sum += i;
//    }
//    printf("%lld", sum);
//    return 0;
//}

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(void)
//{
//	char* p = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

int* test()
{
	int arr[10] = { 1,2,3,4 };
	return arr;
}
int main()
{
	int* p = test();
	int i = 0;
	printf("hehe\n");
	for (i = 0; i < 4; i++)
	{
		printf("%d ", *p++);
	}
	return 0;
}

