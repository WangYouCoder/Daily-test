#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test(int* arr)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(arr + i) = i;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	printf("%d\n", arr[1]);
//	printf("%d\n", arr[2]);
//	return 0;
//}
//  模拟实现strncpy
//
//char* my_strncpy(char* dest, char* src, int count)
//{
//	char* tmp = dest;
//	while (count--)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	return tmp;
//}
//int main()
//{
//	char arr[20] = "#################";
//	char str[20] = "hellow world";
//	char* tmp = my_strncpy(arr, str, 6);
//	printf("%s", tmp);
//	return 0;
//}
// 
// 
// 
// 
// 
//#include<string.h>
//int main()
//{
//	char arr[20] = "#################";
//	char* str = "hellow world";
//	char* tmp = strncpy(arr, str, 6);
//	printf("%s", tmp);
//	return 0;
//}

//char* my_strncat(char* dest, char* src, int count)
//{
//	char* tmp = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (count--)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	return tmp;
//}
//int main()
//{
//	char arr[20] = "hellow ";
//	char str[20] = "world";
//	char* tmp = my_strncat(arr, str, 2);
//	printf("%s", tmp);
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.dat", "r");//注意这里是"r"，读的形式打开
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件
//	int i = 0;
//	int ch = 0;
//	for (i = 0; i < 3; i++)//刚刚我们存放了三个字符，所以是3
//	{
//		ch = fgetc(pf);
//		printf("%c ", ch);
//	}
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	fputs("abcd", pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件
//	char arr[20] = { 0 };
//	fgets(arr, 3, pf);
//	printf("%c ", arr[0]);
//	printf("%c ", arr[1]);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	int score;
//}Stu;
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	Stu s = { "zhangsan", 20, 80 };
//	fprintf(pf, "%s %d %d",s.name,s.age,s.score);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	int score;
//}Stu;
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.dat", "r");//这里切记要换
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	Stu s = { 0 };
//	fscanf(pf, "%s %d %d", s.name, &(s.age), &(s.score));
//	printf("%s %d %d", s.name, s.age, s.score);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	int score;
//}Stu;
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.dat", "wb");//这里切记要换
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	Stu s = { "zhangsan", 20, 80 };
//	fwrite(&s, sizeof(Stu), 1, pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	int score;
//}Stu;
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.dat", "rb");//这里切记要换
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	Stu s = { 0 };
//	fread(&s, sizeof(Stu), 1, pf);
//	printf("%s %d %d", s.name, s.age, s.score);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	int score;
//}Stu;
//int main()
//{
//	char arr[30] = { 0 };
//	Stu s = { "zhangsan", 20, 80 };
//
//	sprintf(arr, "%s %d %d", s.name, s.age, s.score);
//	printf(arr);
//
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	int score;
//}Stu;
//int main()
//{
//	char arr[30] = { "zhangsan 20 80 "};
//	Stu s = { 0 };
//
//	sscanf(arr, "%s %d %d", s.name, &(s.age), &(s.score));
//	printf("%s %d %d", s.name, s.age, s.score);
//
//	return 0;
//}

//
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//	fputc('d', pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


int main()
{
	//打开文件
	FILE* pf = fopen("test.dat", "r");//注意这里是"r"，读的形式打开
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//读文件
	int ch = 0;
	ch = fgetc(pf);
	printf("%c ", ch);//应该输出a

	ch = fgetc(pf);
	printf("%c ", ch);//应该输出b

	ch = fgetc(pf);
	printf("%c ", ch);//应该输出c

	fseek(pf, -3, SEEK_CUR);
	ch = fgetc(pf);
	printf("%c ", ch);//应该是d,但是我想让它输出a

	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}