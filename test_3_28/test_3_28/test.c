#define _CRT_SECURE_NO_WARNINGS 1
//九九乘法表
#include <stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i < 10; i++)
//    {
//        int j = 0;
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%2d ", j, i, i * j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//int main()
//{
	//写文件
	//相对路径
	//FILE* pf = fopen("test.txt", "w");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}

	////绝对路径
	//FILE* p = fopen("C:\\Users\\李帅勇\\Desktop\\test2.txt", "w");
	//if (p == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}

	//FILE* pc = fopen("C:\\Users\\李帅勇\\Desktop\\test2.txt", "r");
	//if (pc == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}


	////关闭文件
	//fclose(pc);
	//pc = NULL;
	//return 0;


	////关闭文件
	//fclose(pf);
	//pf = NULL;
	//return 0;
//}


//                            写文件
//int main()
//{
//	//绝对路径
//	FILE* p = fopen("C:\\Users\\李帅勇\\Desktop\\test2.txt", "w");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		fputc('a' + i, p);
//	}
//
//	//关闭文件
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//                    读文件
//int main()
//{
//	//绝对路径
//	FILE* p = fopen("C:\\Users\\李帅勇\\Desktop\\test2.txt", "r");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int i = 0;
//	int ch = 0;
//	for (i = 0; i < 26; i++)
//	{
//		ch = fgetc(p);
//		printf("%c ", ch);
//	}
//
//	//关闭文件
//	fclose(p);
//	p = NULL;
//	return 0;
//}